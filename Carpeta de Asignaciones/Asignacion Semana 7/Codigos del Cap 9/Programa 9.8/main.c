#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE*);

int main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "wb")) != NULL)
    {
        escribe(ar);
        fclose(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }

    return 0;
}

void escribe(FILE *ap)
{
    alumno alu;
    int i = 0, r;
    printf("\nDeseas ingresar informacion sobre alumno? (si-1 no-0): ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Matrícula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        getchar(); // To consume the newline character left by previous scanf
        fgets(alu.nombre, 20, stdin);
        // Remove newline character if present
        size_t len = strlen(alu.nombre);
        if (len > 0 && alu.nombre[len-1] == '\n') {
            alu.nombre[len-1] = '\0';
        }
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\nDesea ingresar informacion sobre mas alumnos? (si-1 no-0): ");
        scanf("%d", &r);
    }
}

