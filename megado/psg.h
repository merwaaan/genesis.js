#pragma once

#include <stdint.h>

// PSG: Programmable Sound Generator
// see: http://www.smspower.org/Development/SN76489

struct Genesis;

typedef struct SquareChannel {
    uint8_t volume : 4;
    uint16_t tone : 10;
} SquareChannel;

typedef struct NoiseChannel {
    uint8_t volume : 4;
    union {
        uint8_t noise;
        struct {
            uint8_t mode : 1;
            uint8_t shift_rate : 2;
        };
    };
} NoiseChannel;

typedef struct PSG {
    SquareChannel square[3];
    NoiseChannel noise;

    uint8_t latched_channel : 2;
    uint8_t latched_register : 1;
} PSG;

PSG* psg_make(struct Genesis*);
void psg_free(PSG*);
void psg_write(PSG*, uint8_t);