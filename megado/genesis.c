#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "audio.h"
#include "debugger.h"
#include "genesis.h"
#include "joypad.h"
#include "m68k/m68k.h"
#include "m68k/instruction.h"
#include "renderer.h"
#include "settings.h"
#include "snapshot.h"
#include "vdp.h"
#include "psg.h"
#include "utils.h"
#include "ym2612.h"

Genesis* genesis_make()
{
    Genesis* g = calloc(1, sizeof(Genesis));
    g->settings = settings_make();
    g->rom = calloc(0x400000, sizeof(uint8_t));
    g->ram = calloc(0x10000, sizeof(uint8_t));
    g->m68k = m68k_make(g);
    g->z80 = z80_make(g);
    g->vdp = vdp_make(g);
    g->psg = psg_make(g);
    g->ym2612 = ym2612_make(g);
    g->joypad1 = joypad_make();
    g->joypad2 = joypad_make();
    g->renderer = renderer_make(g);
    g->audio = audio_make(g);
    g->debugger = debugger_make(g);
    g->status = Status_NoGameLoaded;

    return g;
}

void genesis_free(Genesis* g)
{
    if (g == NULL)
        return;

    // Save the settings when quitting
    // TODO not the best place to that, should rather be in quit() or deinit() or something
    settings_save(g->settings);

    m68k_free(g->m68k);
    z80_free(g->z80);
    vdp_free(g->vdp);
    psg_free(g->psg);
    ym2612_free(g->ym2612);
    joypad_free(g->joypad1);
    joypad_free(g->joypad2);
    settings_free(g->settings);
    renderer_free(g->renderer);
    audio_free(g->audio);
    debugger_free(g->debugger);

    free(g->rom);
    free(g->ram);
    free(g->sram);
    free(g);
}

static void print_header_info(char* label, uint8_t* data, uint8_t length)
{
    char* string = calloc(length + 1, sizeof(char));
    strncpy(string, (char*)data, length);

    printf("%-48s %s\n", string, label);

    free(string);
}

void genesis_load_rom_file(Genesis* g, const char* path)
{
    printf("Opening %s...\n", path);

    FILE* file = fopen(path, "rb");
    if (!file)
    {
        FATAL("Cannot read file \"%s\"", path);
    }

    // Load the ROM into memory
    fseek(file, 0, SEEK_END);
    int file_length = ftell(file);
    fseek(file, 0, SEEK_SET);
    fread(g->rom, sizeof(uint8_t), file_length, file);
    fclose(file);

    genesis_initialize(g);

    // Display info from the ROM header
    printf("----------------\n");
    print_header_info("", g->rom + 0x100, 16);
    print_header_info("", g->rom + 0x110, 16);
    print_header_info("[Domestic title]", g->rom + 0x120, 48);
    print_header_info("[International title]", g->rom + 0x150, 48);
    print_header_info("[Serial number]", g->rom + 0x180, 14);
    print_header_info("[Country]", g->rom + 0x1F0, 8);
    printf("%06x - %06x                                  [ROM]\n", 0, g->rom_end);
    printf("%06x - %06x                                  [SRAM]\n", g->sram_start, g->sram_end);
    printf("----------------\n");

    // Look for snapshots/breakpoints for this game
    snapshots_preload(g, g->renderer->snapshots);
    debugger_preload(g->debugger);

    // Set the system region depending on the country code of the game
    uint8_t* country_codes = g->rom + 0x1F0;
    switch (country_codes[0])
    {

    // Initially, the country code was either 'J', 'U' or 'E'
    // (some games have multiple country codes, we only consider the first one)
    case 'J': g->region = Region_Japan; break;
    case 'U': g->region = Region_USA; break;
    case 'E': g->region = Region_Europe; break;

    default:
    {
        // Specifications were updated for later Genesis versions and a single ASCII character encodes compatible regions
        // (Genesis Technical Bulletin #31, http://mode5.net/32x-DDK/Bulletins/Gen-tech/Tech31-01.gif)
        uint8_t code = strtol((char*)country_codes, NULL, 16);
        if (code & 1)
            g->region = Region_Japan; // Bit 0 for Japan
        else if (code & 4)
            g->region = Region_USA; // BIT 2 for USA
        else if (code & 0xA)
            g->region = Region_Europe; // Bit 1 and 4 for Europe (Bit 1 is documented as "Japan PAL", but in practice it seems to be used for "French PAL Secam")
        else
        {
            printf("Invalid country code %s, using default (Japan)\n", country_codes);
            g->region = Region_Japan;
        }
    }
    }

    g->status = Status_Running;
}

struct DecodedInstruction* genesis_decode(Genesis* g, uint32_t pc)
{
    printf(".%p %p.\n", g, g->m68k);
    return m68k_decode(g->m68k, pc);
}

#define WORD(x) ((x)[0] << 8 | (x)[1])
#define LONG(x) ((x)[0] << 24 | (x)[1] << 16 | (x)[2] << 8 | (x)[3])

void genesis_initialize(Genesis* g)
{
    // http://darkdust.net/writings/megadrive/initializing
    // http://md.squee.co/Howto:Initialise_a_Mega_Drive

    g->rom_end = m68k_read_l(g->m68k, 0x1a4);
    g->sram_start = m68k_read_l(g->m68k, 0x1b4);
    g->sram_end = m68k_read_l(g->m68k, 0x1b8);

    m68k_initialize(g->m68k);
    z80_initialize(g->z80);
    vdp_initialize(g->vdp);
    psg_initialize(g->psg);
    ym2612_initialize(g->ym2612);
    debugger_initialize(g->debugger);
    audio_initialize(g->audio);

    g->sram = calloc(g->sram_end - g->sram_start, sizeof(uint8_t));
}

void genesis_step(Genesis* g)
{
    uint32_t cycles = m68k_step(g->m68k);
    // The Z80 runs at half the frequency of the M68K, so we run the Z80 only
    // for half the cycles of the last M68K step.  Note that since we are
    // dividing integers here, we might lose some accuracy if the number of
    // cycles is odd.  But, from a cursory look at the cycles tables for the
    // M68K, it appears they are all even, so we should be good.
    z80_run_cycles(g->z80, cycles / 2);

    // Catch up the audio
    // The PSG runs at the Z80 frequency
    psg_run_cycles(g->psg, cycles / 2);

    ym2612_run_cycles(g->ym2612, cycles); // TODO: check freq of YM2612
}

static void genesis_frame(Genesis* g)
{
    // The number of scanlines depends on the region
    // http://forums.sonicretro.org/index.php?showtopic=5615
    uint16_t lines = g->region == Region_Europe ? 312 : 262; // TODO not sure about these values

    for (uint16_t line = 0; line < lines; ++line)
    {
        // Execute one scanline worth of instructions
        uint32_t cycles = m68k_run_cycles(g->m68k, 366); // TODO not sure about that value
        z80_run_cycles(g->z80, cycles / 2); // Z80 runs at half the frequency of M68
        psg_run_cycles(g->psg, cycles / 2); // PSG runs at Z80 frequency
        ym2612_run_cycles(g->ym2612, cycles); // TODO: check freq of YM2612

        // Draw the scanline
        vdp_draw_scanline(g->vdp, line);

        // Exit early if the emulation has been paused
        if (g->status != Status_Running)
            break;

        g->vdp->hblank_in_progress = true;
        cycles = m68k_run_cycles(g->m68k, 122); // http://gendev.spritesmind.net/forum/viewtopic.php?t=94#p1105
        z80_run_cycles(g->z80, cycles / 2); // Z80 runs at half the frequency of M68
        psg_run_cycles(g->psg, cycles / 2); // PSG runs at Z80 frequency
        ym2612_run_cycles(g->ym2612, cycles); // TODO: check freq of YM2612
        g->vdp->hblank_in_progress = false;

        // Exit early if the emulation has been paused
        if (g->status != Status_Running)
            break;
    }

    debugger_post_frame(g->debugger);
}

void genesis_update(Genesis* g)
{
    if (g->status == Status_Running)
    {
        genesis_frame(g);
    }
    else if (g->status == Status_Rewinding)
    {
        bool more_to_rewind = debugger_rewind(g->debugger);
        if (!more_to_rewind)
            g->status = Status_Running;

        vdp_draw_screen(g->vdp);
    }

    renderer_render(g->renderer);
    audio_update(g->audio);
}

void genesis_get_rom_name(Genesis* g, char* name)
{
    // Get the international title from the header
    strncpy(name, (char*)(g->rom + 0x150), 48);

    // Use the domestic title as a fallback
    if (name[0] == ' ')
        strncpy(name, (char*)(g->rom + 0x120), 48);

    // Remove trailing whitespaces
    uint8_t cursor = 48;
    while (name[--cursor] == ' ');

    name[cursor + 1] = '\0';
}
