#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt","w");

    if (ar != NULL)
    {
        while ((p1 = getchar()) != "w")
        fputc(p1, ar);
        fclose(ar);

    }
    else
        printf("Nose puede abrir el archivo");
}
