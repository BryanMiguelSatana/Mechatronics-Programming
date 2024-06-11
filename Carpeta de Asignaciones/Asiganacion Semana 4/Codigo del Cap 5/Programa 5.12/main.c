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
    } while (TAM > MAX || TAM < 1); // Se verifica que el tamaño del arreglo sea correcto.

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
    int AUX, L, I;
    for (I = 1; I < T; I++) {
        AUX = A[I];
        L = I - 1;
        while ((L >= 0) && (AUX < A[L])) {
            A[L + 1] = A[L];
            L--;
        }
        A[L + 1] = AUX;
    }
}

