#include <stdio.h>

void Lectura1(int [][12]);
void Lectura2(float[], int);
void CalcularVentas(float[][12], int, int, float[], float[]);
void CalcularVentasTotales(float[], int);
void ProductoMasVendido(float[], int);

void main(void) {
    int FAB[15][12] = {0};  // Initialize sales array with 0s
    float COS[15], VEN[15];

    Lectura1(FAB);
    Lectura2(COS, 15);
    CalcularVentas(FAB, 15, 12, COS, VEN);
    CalcularVentasTotales(VEN, 15);
    ProductoMasVendido(VEN, 15);
}

void Lectura1(int A[][12]) {
    int MES, PRO, CAN;
    printf("\nEnter month, product type, and quantity sold (or -1 to exit): ");
    scanf("%d %d %d", &MES, &PRO, &CAN);

    while(MES != -1 && PRO != -1 && CAN != -1) {
        A[PRO - 1][MES - 1] += CAN;  // Adjust for 0-based indexing
        printf("Enter month, product type, and quantity sold (or -1 to exit): ");
        scanf("%d %d %d", &MES, &PRO, &CAN);
    }
}

void Lectura2(float A[], int N) {
    int I;
    for(I = 0; I < N; I++) {
        printf("Enter cost of product %d: ", I + 1);
        scanf("%f", &A[I]);
    }
}

void CalcularVentas(float A[][12], int F, int C, float V1[], float V2[]) {
    int I, J;
    printf("\n");
    for(I = 0; I < F; I++) {
        float SUM = 0;
        for(J = 0; J < C; J++)
            SUM += A[I][J];
        V2[I] = V1[I] * SUM;
        printf("Total sales for product %d: %.2f\n", I + 1, V2[I]);
    }
}

void CalcularVentasTotales(float A[], int C) {
    int I;
    float TOTAL = 0.0;
    for(I = 0; I < C; I++)
        TOTAL += A[I];
    printf("\nTotal sales of the factory: %.2f\n", TOTAL);
}

void ProductoMasVendido(float A[], int C) {
    int I, TPR = 0;
    float VEN = A[0];
    for (I = 1; I < C; I++) {
        if (VEN < A[I]) {
            TPR = I;
            VEN = A[I];
        }
    }
    printf("\nMost sold product type: %d \t   Sales: %.2f\n", TPR + 1, VEN);
}
