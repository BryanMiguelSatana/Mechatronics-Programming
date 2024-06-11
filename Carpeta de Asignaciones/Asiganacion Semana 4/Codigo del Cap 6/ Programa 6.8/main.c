#include <stdio.h>

const int MAX = 50;

void Lectura(int [][MAX], int, int);
void Traspuesta(int[][MAX], int[][MAX], int, int);
void Imprime(int [][MAX], int, int);

void main(void) {
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int FIL, COL;

    do {
        printf("Ingrese el número de filas de la matriz: ");
        scanf("%d", &FIL);
        if (FIL > MAX || FIL < 1) {
            printf("Número de filas fuera de rango. Debe ser entre 1 y %d.\n", MAX);
        }
    } while (FIL > MAX || FIL < 1);

    do {
        printf("Ingrese el número de columnas de la matriz: ");
        scanf("%d", &COL);
        if (COL > MAX || COL < 1) {
            printf("Número de columnas fuera de rango. Debe ser entre 1 y %d.\n", MAX);
        }
    } while (COL > MAX || COL < 1);

    Lectura(MAT, FIL, COL);
    Traspuesta(MAT, TRA, FIL, COL);
    Imprime(TRA, COL, FIL);
}

void Lectura(int A[][MAX], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++) {
        for (J = 0; J < C; J++) {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}

void Traspuesta(int M1[][MAX], int M2[][MAX], int F, int C) {
    int I, J;
    for (I = 0; I < F; I++) {
        for (J = 0; J < C; J++) {
            M2[J][I] = M1[I][J];
        }
    }
}

void Imprime(int A[][MAX], int F, int C) {
    int I, J;
    printf("\nMatriz transpuesta:\n");
    for (I = 0; I < F; I++) {
        for (J = 0; J < C; J++) {
            printf("Elemento %d %d: %d ", I+1, J+1, A[I][J]);
        }
        printf("\n");
    }
}

