#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void change_res (char* str, int len);

int main (int argc, char** argv)
    {
    if (argc < 2)
        {
        printf ("No input filename\n");

        return 0;
        }

    char fin_name [256] = "";
    strcpy (fin_name, argv[1]);
    int fin_name_len = strlen(fin_name);

    char fout_name [260] = "";

    if (argc > 2)
        strcpy (fout_name, argv[2]);
    else
        {
        strcpy (fout_name, fin_name);
        change_res (fout_name, fin_name_len);
        }

    FILE* fin = fopen(fin_name, "r");
    FILE* fout = fopen(fout_name, "wb");

    printf ("Start\nOutput filename: %s\n", fout_name);

    while (!feof (fin))
        {
        uint16_t buf = 0;
        fscanf (fin, "%x", &buf);
        fprintf (fout, "%c%c", buf >> 8, buf & 0xFF);
        }

    fclose (fin);
    fclose (fout);

    getch();

    return 0;
    }

void change_res (char* str, int len)
    {
    int i = len-1;
    for (; i > 0; i--)
        {
        if (str[i] == '.')
            break;
        }

    if (i == 0)
        {
        str[len] = '.';
        str[len+1] = 'b';
        str[len+2] = 'i';
        str[len+3] = 'n';
        }
    else
        {
        str[i] = '.';
        str[i+1] = 'b';
        str[i+2] = 'i';
        str[i+3] = 'n';
        }
    }
