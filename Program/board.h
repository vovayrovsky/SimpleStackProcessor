#include "std_conf.h"
#include "cpu.h"

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

struct Board
    {
        Board (const Board&);
    Board& operator= (const Board&);

    uint16_t* store;


    CPU cpu0;

        Board():
            store(new uint16_t[1 + MEMORY_SIZE]),
            cpu0()
            {
            assert (store);
            for (int i = 0; i < MEMORY_SIZE; i++) store[i] = 0;
            store[MEMORY_SIZE] = 0xFFFF;
            }

       ~Board()
            {
            delete store;
            }

    void Start();
    };

void Board :: Start()
    {
    bool stop = false;

    while (!stop)
        {
        stop = cpu0.CLK (store);

        printf ("VIEW PORT: 0x%x\r", store[VIEW_PORT]);

        while (true)
            {
            int key = getch();

            if (tolower(key) == 'e')
                {
                stop = true;
                break;
                }
            else if (tolower(key) == 'd')
                {
                printf ("\nMemory map:\n");
                for (uint16_t i = 0; i < 0x100; i++)
                    {
                    printf ("%x\t", store[i]);
                    if (i % 8 == 7) printf ("\n");
                    }

                printf ("\n");
                }
            else if (tolower(key) == 'a')
                {
                printf ("\nStack map:\n");
                for (uint16_t i = 0xFFFF-0x100; i < 0xFFFF; i++)
                    {
                    printf ("%x\t", store[i]);
                    if (i % 8 == 7) printf ("\n");
                    }

                printf ("\n");
                }
            else if (tolower(key) == 32)
                break;
            }
        }
    }
