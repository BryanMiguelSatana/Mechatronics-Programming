#include <stdio.h>
#include <stdlib.h>

int f3(void);
int f4(void);

int K = 3;

void main(void)
{
    int I;
    for(I=1;I<=3; I++)
    {
        printf("\nResultado de la funcion f1 es: %d",f1());
        printf("\nResultado de la funcion f2 es: %d",f2());
        printf("\nnesultado de la funcion f3 es: %d",f3());
        printf("\nResultado de la funcion f4 es: %d",f4());
    }
}
int f1(void)
{
K+=K;
return(K);
}


int f2(void)
{
int K=1;
K++;
return(K);
}

int f3(void){
static int K = 8;
K += 2;
return (K);
}

int f4(void)
{
    int localK = 5;
    K = K + localK;
    return (K);
}

