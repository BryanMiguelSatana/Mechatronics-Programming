#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fra[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    printf("\nEscribe la linea de texto en forma inversa: ");
    inverso(fra);
}

void inverso(char *cadena)
    {
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
    }

