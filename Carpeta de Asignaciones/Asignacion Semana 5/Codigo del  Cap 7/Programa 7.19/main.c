#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char fra[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\nLa linea de texto tiene %d palabras", i);
}

    int cuentap(char *cad)
{
    char *cad0;
    int i = 0;
    cad0 = strstr(cad, " ");

    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr(cad + 1, " ");

    }
    return (i);


}
