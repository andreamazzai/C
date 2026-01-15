/*
 *
 * pal16l8.c V1.0 (c) Dieter Mueller 08/2004
 *
 * example: using a 64kB EPROM as programmable logic device.
 * 27512, gives 16 Input_Pins and 8 Output_Pins.
 *
 * Note: unlike with PALs/GALS, the number/complexity of
 * product_terms/equations is only limited by the Pin count
 * of the EPROM... and the abilities of your compiler.
 *
 * Not much memory used, generating 1MB files for 27080
 * should be possible under DOS.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void);
char do_rom(long addr);

int main(void)
{
    long i;
    for (i = 0; i < 0x10 /* 000 */; i++) // try all possible input patterns, 64 kBytes
    {
        printf("Byte %d = %d\n", i, do_rom(i)); // write one EPROM Byte
    }
    return (0);
}
char do_rom(long addr) // do one Byte
{
    char out;
    char a, b, c;
    char q0, q1, q2;

    // default = Zero.
    a = 0;
    b = 0;
    c = 0;
    q0 = 0;
    q1 = 0;
    q2 = 0;

#define ALU_PASS_A 0x00
#define ALU_PASS_B 0x01

#define ALU_ROL_A 0x02
#define ALU_ROR_A 0x03
#define ALU_LSL_A 0x04
#define ALU_LSR_A 0x05

#define ALU_ADD 0x06
#define ALU_SUB 0x07
#define ALU_ADC 0x08
#define ALU_SBC 0x09

#define ALU_AND 0x0a
#define ALU_OR 0x0b
#define ALU_XOR 0x0c

#define ALU_CONST_0 0x0d
#define ALU_CONST_1 0x0e
#define ALU_CONST_F 0x0f
    char cmd, a, b;
    char cin;        // carry input
    char cout, zout; // flags
    switch (cmd)
    {
    case ALU_PASS_A:
        out = a;
        break;
    case ALU_PASS_B:
        out = b;
        break;

    case ALU_ROL_A:
        if (cin)
            out = 0x01; // the rest like LSL
    case ALU_LSL_A:
        out |= (a << 1) & 0x0e;
        if ((char)a & 0x08)
        {
            cout = -1;
        }
        break;

    case ALU_ROR_A:
        if (cin)
            out = 0x08; // the rest like LSR
    case ALU_LSR_A:
        out |= (a >> 1) & 0x07;
        if ((char)a & 0x01)
        {
            cout = -1;
        }
        break;

    case ALU_AND:
        out = a & b;
        break;
    case ALU_OR:
        out = a | b;
        break;
    case ALU_XOR:
        out = a ^ b;
        break;

    case ALU_ADC:
        if (cin)
            out = 1;
    case ALU_ADD:
        out += (a & 0xf) + (b & 0xf);
        if (out > 0x0f)
        {
            cout = -1;
        }
        break;

    case ALU_SBC:
        if (cin == 0)
            out = -1; // subtract 1, borrow active.
    case ALU_SUB:
        out += (a & 0xf) - (b & 0xf);
        if (out >= 0)
        {
            cout = -1; /*no borrow.*/
        }
        break;

    case ALU_CONST_0:
        out = 0x00;
        break;
    case ALU_CONST_1:
        out = 0x01;
        break;
    case ALU_CONST_F:
        out = 0x0f;
        break;
    }

    // scan input_pins. //WARNING: casting HAS to be, avoiding funny results.
    if ((long)addr & 0x01)
        a = -1;
    if ((long)addr & 0x02)
        b = -1;
    if ((long)addr & 0x04)
        c = -1;

    // equations. //WARNING: thou shalt not use ! to negate.
    q0 = a | b;
    q1 = a & b;
    q2 = (~a & b) ^ c; //((NOT A) AND B) XOR C //last stage of a full adder

    // now to throw all the results together.
    out = 0; // default = Zero.
    if (q0)
        out |= 0x01;
    if (q1)
        out |= 0x02;
    if (q2)
        out |= 0x04;

    // done.
    return (out);
}
