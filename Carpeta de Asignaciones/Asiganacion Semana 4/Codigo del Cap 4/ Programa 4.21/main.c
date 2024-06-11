#include <stdio.h>


int z, y;
int F1(float);
void F2(float, int *);

void main(void)
{
    int w;
    float x;
    z = 5;
    y = 7;
    w = 2;
    x = (float)y / z;
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
    F2(x, &w);
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
}

int F1(float x)
{
    int k;
    if (x != 0)
    {
        k = z - y;
        x++;
    }
    else
    {
        k = z + y;
    }
    printf("\nF1: %d %d %.2f %d", z, y, x, k);
    return (k);
}

void F2(float t, int *r)
{
    int y_local;
    y_local = 5;
    z = 0;
    printf("\nF2: %d %d %.2f %d", z, y_local, t, *r);
    if (z == 0)
    {
        z = (*r) * 2;
        t = (float)z / 3;
        printf("\nIngresa el valor: ");
        scanf("%d", r);
        printf("\nF2: %d %d %.2f %d", z, y_local, t, *r);
    }
    else
    {
        z = (*r) * 2;
        printf("\nF2: %d %d %.2f %d", z, y_local, t, *r);
    }
    *r = F1(t);
}

