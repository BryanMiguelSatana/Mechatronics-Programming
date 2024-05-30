#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, NUM;
    long FAC;
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);
    if (NUM >= 0)
 {
        FAC = 1;
        for (I=1; I <= NUM; I++)
        FAC *= I;

    printf("\El factorial de %d es: %ld", NUM, FAC);

 }
 else
 printf("\nError en el dato ingresado");

}
