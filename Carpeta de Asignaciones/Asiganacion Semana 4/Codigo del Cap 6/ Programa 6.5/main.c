#include <stdio.h>

const int MAX_ALUMNOS = 50;
const int EXAMENES = 4;

void Lectura(float[][EXAMENES], int);
void Funcion1(float[][EXAMENES], int);
void Funcion2(float[][EXAMENES], int);

void main(void) {
    int NAL;
    float ALU[MAX_ALUMNOS][EXAMENES];

    do {
        printf("Ingrese el número de alumnos del grupo: ");
        scanf("%d", &NAL);
    } while (NAL > MAX_ALUMNOS || NAL < 1);

    Lectura(ALU, NAL);
    Funcion1(ALU, NAL);
    Funcion2(ALU, NAL);
}

void Lectura(float A[][EXAMENES], int N) {
    int I, J;
    for(I = 0; I < N; I++) {
        for(J = 0; J < EXAMENES; J++) {
            printf("Ingrese la calificación %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I][J]);
        }
    }
}

void Funcion1(float A[][EXAMENES], int T) {
    int J;
    float SUM, PRO;
    for(int I = 0; I < T; I++) {
        SUM = 0;
        for(J = 0; J < EXAMENES; J++)
            SUM += A[I][J];
        PRO = SUM / EXAMENES;
        printf("\nEl promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void Funcion2(float A[][EXAMENES], int T) {
    int I, J, MAY;
    float SUM, PRO, MPRO = 0;
    printf("\n");
    for(J = 0; J < EXAMENES; J++) {
        SUM = 0;
        for(I = 0; I < T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if(PRO > MPRO) {
            MPRO = PRO;
            MAY = J;
        }
        printf("\nEl promedio del examen %d es: %f", J+1, PRO);
    }
    printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f", MAY+1, MPRO);
}
