#include <stdint.h>
#include <stdlib.h>

#include "joypad.h"

Joypad* joypad_make()
{
    return calloc(1, sizeof(Joypad));
}

void joypad_free(Joypad* joypad)
{
    free(joypad);
}

uint8_t joypad_read(Joypad* joypad)
{
    return joypad->buttons & 0x40 ? joypad->buttons : joypad->buttons >> 8;
}

void joypad_write(Joypad* joypad, uint8_t value)
{
    // Only write bit 6 (in both low and high bytes)
    joypad->buttons = (joypad->buttons & 0xBFBF) | (value & 0x4040);
}

void joypad_press(Joypad* joypad, JoypadButton button)
{
    joypad->buttons |= button;
}

void joypad_release(Joypad* joypad, JoypadButton button)
{
    joypad->buttons &= ~button;
}