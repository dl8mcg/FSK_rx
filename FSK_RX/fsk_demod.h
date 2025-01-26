/*
*   by dl8mcg Jan. 2025
*/

#pragma once

#ifndef DEMOD_H
#define DEMOD_H

typedef enum 
{
    FSK_RTTY_45_BAUD,
    FSK_RTTY_50_BAUD,
    FSK_ASCII_300_BAUD,
    FSK_AX25_1200_BAUD
} FskMode;

extern volatile int demod_bit;

void init_fsk_demod(FskMode mode);
void process_fsk_demodulation(float sample);

#endif // DEMOD_H