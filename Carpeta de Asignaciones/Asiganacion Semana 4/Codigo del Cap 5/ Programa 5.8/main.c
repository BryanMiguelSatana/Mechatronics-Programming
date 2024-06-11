#include <stdio.h>

const int TAM = 100;
void Imprime(int[], int);
void Primo(int, int *);

int main(void)
{
    int P[TAM];
    P[0] = 2;
    P[1] = 3;
    int FLA, J = 2, PRI = 5;
    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }
    Imprime(P, TAM);
    return 0;
}

void Primo(int A, int *B)
{
    int DI = 3;
    while (*B && (DI <= (A / 2)))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI++;
    }
}

void Imprime(int Primos[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}





