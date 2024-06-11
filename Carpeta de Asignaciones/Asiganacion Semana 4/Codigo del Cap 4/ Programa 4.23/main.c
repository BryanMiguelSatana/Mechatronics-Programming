#include <stdio.h>
#include <stdlib.h>

void trueque(int *x, int *y)
{
    int tem;
    tem= *x;
    *x =*y;
    *y = tem;

}
int suma(int x)
{
    return (x + x);

}
int main()
{
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    trueque(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    int result = suma(a);
    printf("Sum of a + a = %d\n", result);

    return 0;
}
