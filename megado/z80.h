#pragma once

#include <stdbool.h>
#include <stdint.h>

#define Z80_RAM_LENGTH 0x2000

typedef struct Z80 {
    struct Genesis* genesis;

    int32_t left_cycles;

    uint16_t pc;

    bool running;                 // Whether the Z80 is executing instructions
    bool resetting;               // Whether the Z80 is being reset

    uint8_t ram[Z80_RAM_LENGTH];
} Z80;

typedef struct {
    uint8_t length;
    char* mnemonics;
} DecodedZ80Instruction;

Z80* z80_make(struct Genesis*);
void z80_free(Z80*);

void z80_initialize(Z80*);

uint8_t z80_step(Z80*);
void z80_run_cycles(Z80*, int);

void z80_bus_req(Z80*, uint8_t);
uint8_t z80_bus_ack(Z80*);
void z80_reset(Z80*, uint8_t);

uint8_t z80_read(Z80*, uint16_t);
void z80_write(Z80 *, uint16_t, uint8_t);

DecodedZ80Instruction* z80_decode(Z80*, uint16_t);
