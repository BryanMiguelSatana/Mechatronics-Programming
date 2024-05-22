#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    printf("Ingrese el numero: ");
    scanf("%d", &NUM);
    if (NUM == 0)
       printf("\nNulo");
   else
       if (pow (-1, NUM) > 0)
        printf("\nPar");
       else
           printf("\nImpar");
}
