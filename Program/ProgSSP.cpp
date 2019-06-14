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

    FILE* fin = fopen (argv[1], "r");
    assert (fin);

    Board brd;

    char buf = 0;
    char buf1 = 0;

    printf ("Loading program\n");

    uint16_t len = 0;

    for (len = 0; !feof(fin); len++)
        {
        fscanf (fin, "%c%c", &buf1, &buf);

        printf ("len: %x %hx|%hx\n", len, int(buf1), int(buf));

        brd.store[len] = ((buf1 & 0xFF) << 8) | (buf & 0xFF);
        }

    fclose (fin);

    printf ("\nInitial memory map:\n");
    for (uint16_t i = 0; i < len; i++)
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
