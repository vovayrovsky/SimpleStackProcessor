#include "board.h"

#include <stdio.h>

#define VERS "v0.1"

int main(int argc, char** argv)
    {
    if (argc < 2)
        {
        printf ("No input file\n");
        return 0;
        }

    printf ("SSP version: " VERS "\n"
            "Load file: %s\n", argv[1]);

    FILE* fin = fopen (argv[1], "rt");
    assert (fin);

    Board brd;

    uint16_t dump_len = 0xFF;
    char buf = 0;

    if (dump_len == 0) return -1;

    printf ("Loading program\n", dump_len);
    for (uint16_t i = 0; i < dump_len; i++)
        {
        fscanf (fin, "%c%c", &(brd.store[i]), &buf);
        brd.store[i] = brd.store[i] << 8 | buf;
        }

    fclose (fin);

    printf ("\nInitial memory map:\n");
    for (uint16_t i = 0; i < dump_len; i++)
        {
        printf ("%x\t", brd.store[i]);
        if (i % 8 == 7) printf ("\n");
        }

    printf ("\nStarting system\n");
    printf ("%d\n", getch());
    brd.Start();

    getch();
    return 0;
    }
