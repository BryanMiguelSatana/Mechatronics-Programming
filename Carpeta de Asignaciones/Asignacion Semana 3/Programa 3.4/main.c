#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar - :\t");
    scanf("%d", &NUM);
    while (NUM)
 /* Observa que la condición es verdadera mientras el entero es diferente de cero. */
{
    CUA = pow (NUM, 2);
    printf("{%d al cubo es %ld", NUM, CUA);
    SUC = SUC + CUA;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
}
 printf("\nLa suma de los cuadrados es %ld", SUC);
}
