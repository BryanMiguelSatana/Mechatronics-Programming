#include <stdio.h>

void LecturaM(float[][12], int, int);
void LecturaV(float *, int);
void F1(float[][12], int, int, float *, float *);
void F2(float[][12], int, int);
void F3(float *, int);

void main(void) {
    float FON[5][12], PRE[5], REN[5];

    LecturaM(FON, 5, 12);
    LecturaV(PRE, 5);
    F1(FON, 5, 12, PRE, REN);
    F2(FON, 5, 12);
    F3(REN, 5);
}

void LecturaM(float A[][12], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++) {
        for (J = 0; J < C; J++) {
            printf("Precio fondo %d, mes %d: ", I + 1, J + 1);
            scanf("%f", &A[I][J]);
        }
    }
}

void LecturaV(float A[], int T) {
    int I;
    printf("\n");
    for (I = 0; I < T; I++) {
        printf("Precio Fondo %d al 31/12/2003: ", I + 1);
        scanf("%f", &A[I]);
    }
}

void F1(float A[][12], int F, int C, float B[], float V[]) {
    int I;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS\n");
    for (I = 0; I < F; I++) {
        V[I] = (A[I][C - 1] - B[I]) / B[I] * 100;
        printf("Fondo %d: %.2f\n", I + 1, V[I]);
    }
}

void F2(float A[][12], int F, int C) {
    int I, J;
    float SUM, PRO;
    printf("\n\nPROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS\n");
    for (I = 0; I < F; I++) {
        SUM = 0;
        for (J = 0; J < C; J++) {
            SUM += A[I][J];
        }
        PRO = SUM / C;
        printf("Fondo %d: %.2f\n", I + 1, PRO);
    }
}

void F3(float A[], int F) {
    float ME = A[0], PE = A[0];
    int M = 0, P = 0, I;
    for (I = 1; I < F; I++) {
        if (A[I] > ME) {
            ME = A[I];
            M = I;
        }
        if (A[I] < PE) {
            PE = A[I];
            P = I;
        }
    }
    printf("\n\nMEJOR Y PEOR FONDO DE INVERSION\n");
    printf("Mejor fondo: %d\tRendimiento: %6.2f\n", M + 1, ME);
    printf("Peor fondo: %d\tRendimiento: %6.2f\n", P + 1, PE);
}

