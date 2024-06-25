#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p, cad[50];
    int n;
    printf("\nIgrese la cadena de caracteres (maximo 50):");
    gets(cad);
    printf("\nIngrese la posicion en la cadena que desea verificar:");

    if((n>=0) && (n<50))
    {
        p = cad [n-1];
        if (islower(p))
            printf("\n%c es una letra minuscula", p);
        else
            printf("%c no es una letra minuscula");

    }
    else
        printf("\n El valor ingresado de n es incorrecto");

}
