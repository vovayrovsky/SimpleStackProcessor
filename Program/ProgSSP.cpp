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

    printf ("Loading program\n");

    uint16_t len = 0;

    for (len = 0; !feof(fin); len++)
        {
        fscanf (fin, "%c%c", &(brd.store[len]), &buf);

        brd.store[len] = brd.store[len] << 8 | buf;
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
