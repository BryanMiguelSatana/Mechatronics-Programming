#include <stdio.h>
#include <stdlib.h>

int suma(int X, int Y)
{
    return(X+Y);

}
int resta(int X, int Y)
{
    return (X-Y);
}

int control(int (*apf)(int, int),int X, int Y)
{
    int RES;
    RES = (*apf) (X,Y);
    return (RES);

}

void main(void)
{
    int R1, R2;
    R1 = control(suma, 15, 5);
    R2 = control(resta,10,4);
    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);

}
