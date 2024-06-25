#include <stdio.h>

int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena)
{
    int c = 0;
    while (!cadena[c] == '\0')
        c++;
    return (c);
}

