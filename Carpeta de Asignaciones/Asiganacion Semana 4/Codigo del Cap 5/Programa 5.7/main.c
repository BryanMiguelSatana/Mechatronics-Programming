#include <stdio.h>

void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

int main(void)
{
    int TAM, ARRE[100];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);
    Imprime(ARRE, TAM);

    return 0;
}

void Lectura(int A[], int T)
{
    printf("\n");
    for (int I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T)
{
    for (int I = 0; I < T; I++)
        printf("\nA[%d]: %d", I, A[I]);
}

void Elimina(int A[], int *T)
{
    int I = 0, K, L;
    while (I < (*T - 1))
    {
        K = I + 1;
        while (K <= (*T - 1))
        {
            if (A[I] == A[K])
            {
                for (L = K; L < (*T - 1); L++)
                    A[L] = A[L + 1];
                *T = *T - 1;
            }
            else
            {
                K++;
            }
        }
        I++;
    }
}

