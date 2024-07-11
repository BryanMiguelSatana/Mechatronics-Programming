#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.tx","r"))!=NULL)
    {
        while (!feof(ar))
        {
            p1 = fgetc(ar);
            putchar(p1);
        }
        fclose(ar);
    }
        else
            printf("nose puede abrir el archivo");
}
