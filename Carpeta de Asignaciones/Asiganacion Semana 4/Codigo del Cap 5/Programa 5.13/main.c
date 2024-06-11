#include <stdio.h>
#define MAX 100

void Lectura(int *, int);
void Ordena(int *, int);
void Imprime(int *, int);

int main() {
    int TAM, VEC[MAX];

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);

    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T) {
    int I;
    for (I = 0; I < T; I++)
        printf("\nA[%d]: %d", I, A[I]);
}

void Ordena(int A[], int T) {
    int I, J, MEN, L;
    for (I = 0; I < (T - 1); I++) {
        MEN = A[I];
        L = I;
        for (J = (I + 1); J < T; J++)
            if (A[J] < MEN) {
                MEN = A[J];
                L = J;
            }
        A[L] = A[I];
        A[I] = MEN;
    }
}

