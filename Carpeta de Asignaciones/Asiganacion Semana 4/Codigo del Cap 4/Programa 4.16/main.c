#include <stdio.h>
#include <stdlib.h>

void acutem(float);
void maxima(float, int);
void minima(float,int);

float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;

int HMAX;
int HMIN;

void main (void)
{
    float TEM;
    int I;
    for(I = 1; I <= 24; I++){

        printf("Ingresa la temperatura de la hora %d:", I);
        scanf("%f",&TEM);
    acutem(TEM);
    maxima(TEM, I);
    minima(TEM, I);
    }
    printf("\n Promedio del dia: %5.2f", (ACT / 24));
    printf("\n Maxima del dia: %5.2f \tHora %d", MAX, HMAX);
    printf("\n Minima del dia: %5.2f \tHora %d", MIN, HMAX);

}
void acutem (float T)
{
    ACT += T;
}
void maxima(float T, int H)
{
    if (MAX < T){
        MAX = T;
        HMAX = H;
    }
}
void minima(float T, int H)
{
    if(MIN > T){
        MIN = T;
        HMIN =H;
    }
}
