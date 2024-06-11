#include <stdio.h>
#include <stdlib.h>

void mayor(float , float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I = 1; I<= 12; I++)
    {
        printf("\n\nIngrese las lluvias del mes %d", I);
        printf("\nRegiones Golfo, pacifico y caribe:");
        scanf("%f %f %f",&GOL ,&PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;

    }
    printf("\n\nPromedio de lluvias Region Golfo: %6.2f",(AGOL /12));
    printf("\n\nPromedio de lluvias Region pacifico: %6.2f",(CAR /12));
    printf("\n\nPromedio de lluvias Region Caribe: %6.2f",(ACAR /12));
    mayor (AGOL, APAC, ACAR);
}


void mayor(float R1 , float R2 , float R3)
{
    if (R1 > R2)
        if(R1 > R3)
        printf(" Region con mayor promedio: Region Golfo. promedio: %6.2f",R1 / 12);
    else
        printf("\nRegion con mayor promedio: Region caribe. Promedio %6.2f",R3 /12);
    else
        if (R2 > R3)
        printf("\n Region con mayor promedio: Region pacifico. Promedio%6.2f",R2 / 12);
    else
        printf(" Region con mayor promedio:Region caribe. Promedio:%6.2", R2 / 12);
}
