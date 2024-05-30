#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, N;
    float LAN, SLA = 0;
    do
{
    printf("Ingrese el número de lanzamientos:\t");
    scanf("%d", &N);
}
    while(N < 1 || N > 11);
    /* Se utiliza la estructura do-while para verificar que el valor de N sea correcto. */
    for(I=1; I<=N; I++)
{
    printf("\nIngrese el lanzamiento %d: ", I);
    scanf("%f", &LAN);
    SLA = SLA + LAN;
}
    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}
