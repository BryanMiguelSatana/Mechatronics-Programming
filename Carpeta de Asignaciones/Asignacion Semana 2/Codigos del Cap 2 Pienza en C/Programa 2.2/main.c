#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f",NPR);
    }

}
