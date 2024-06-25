#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    char c, cad [10];
    int i = 0;
    float sum = 0.0;
    printf("\nDesea ingresar una cadena de caracteres (S\N?)?");
    c = getchar();
    while (c == 'S')
    {
        printf("\nIngrese una cadena de caracteres:");
        fflush(stdin);
        gets(cad);
        i++;
        sum += atof(cad);
        printf("Desea ingresar otra cadena de caracteres (S/N?");
        c = getchar();


    }
    printf("\nsuma: %.2f",sum);
    printf("\nPromedio: %2.f", sum /i);


}
