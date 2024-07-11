#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *ap1, FILE *ap2);

int main(void)
{
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r");
    ap = fopen("arc1.txt", "w");
    if ((ar != NULL) && (ap != NULL))
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
        printf("No se pueden abrir los archivos");

    return 0;
}

void cambia(FILE *ap1, FILE *ap2)
{
    char cad[30], cad1[30], *cad2;
    while (fgets(cad, 30, ap1) != NULL)
    {
        strcpy(cad1, cad);
        cad2 = strstr(cad1, "mexicano");
        while (cad2 != NULL)
        {
            cad2[0] = 'M';
            cad2 = strstr(cad2 + 1, "mexicano");
        }
        fputs(cad1, ap2);
    }
}



