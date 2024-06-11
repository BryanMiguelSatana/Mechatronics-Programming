#include <stdio.h>
#include <stdlib.h>

int mad(int);
void main (void)
{
    int NUM, RES;
    printf("\nIngresa el numero:");
    scanf("%d",&NUM);
    RES = mad(NUM);
    printf("\nEl mayor divisor de %d es: %d",NUM, RES);

}
int mad(int N1)
{
    int I = (N1 / 2);
    while(N1 % I)
        I--;
        return I;
}
