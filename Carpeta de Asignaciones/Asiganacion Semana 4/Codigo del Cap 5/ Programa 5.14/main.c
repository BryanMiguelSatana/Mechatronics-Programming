#include <stdio.h>
#include <math.h>

const int MAX = 100;

void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

int main() {
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(ALU, TAM);
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);

    printf("\nMedia:      %.2f", MED);
    printf("\nVarianza:   %.2f", VAR);
    printf("\nDesviación: %.2f", DES);
    printf("\nModa:       %d", MOD);
}

    void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
{
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
}
}
    float Media(int A [], int T)

{


