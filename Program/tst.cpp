#include <stdio.h>
#include <stdint.h>

int main()
    {
    int c = 0;

    FILE* fin = fopen ("input.txt", "rt");

    while (!feof(fin))
        {
        if (!fscanf (fin, "%X", &c)) break;
        printf ("%x\n", c);
        }
    fclose (fin);

    printf ("%x", c);
    }
