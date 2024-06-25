#include <stdio.h>
#include <ctype.h>

void interpreta(char *);

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
}

void interpreta(char *cadena)
{
    int i = 0, j, k;

    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))
        {
            k = cadena[i - 1] - '0'; // Convertir el carácter numérico a entero
            for (j = 0; j < k; j++)
            {
                putchar(cadena[i]);
            }
        }
        i++;
    }
}



