#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    printf("Ingresa el numero para calcular la serie: ");
    scanf("%d", &NUM);
    if (NUM > 0)
{
    printf("\nSerie de ULAM\n");
    printf("%d \t", NUM);
    while (NUM != 1)
{
    if(pow(-1, NUM) > 0)
    NUM = NUM / 2;
    else
    NUM = NUM * 3 + 1;
    printf("%d \t", NUM);
}
}
 else
 printf("\n NUM debe ser un entero positivo");
}
