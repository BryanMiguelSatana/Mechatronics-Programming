#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

void Lectura(struct alumno*);

void main(void)
{
    struct alumno a0 = {120, "Maria", "contabilidad", 8.9, "Queretaro"};
    struct alumno *a3, *a4, *a5, *a6;

    a3 = &a0;

    a4 = (struct alumno*) malloc(sizeof(struct alumno));

    printf("\nIngrese la matricula del alumno 4:");
    scanf("%d", &a4->matricula);
    fflush(stdin);
    printf("\nIngrese el nombre del alumno 4: ");
    fgets(a4->nombre, 20, stdin);
    a4->nombre[strcspn(a4->nombre, "\n")] = '\0';
    printf("\nIngrese carrera del alumno 4:");
    fgets(a4->carrera, 20, stdin);
    a4->carrera[strcspn(a4->carrera, "\n")] = '\0';
    printf("\nIngrese el promedio del alumno 4:");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("\nIngrese la direccion del alumno 4:");
    fgets(a4->direccion, 20, stdin);
    a4->direccion[strcspn(a4->direccion, "\n")] = '\0';

    a5 = (struct alumno*) malloc(sizeof(struct alumno));
    Lectura(a5);

    a6 = (struct alumno*) malloc(sizeof(struct alumno));
    Lectura(a6);

    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);

    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);

    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);

    printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a6->matricula, a6->nombre, a6->carrera, a6->promedio, a6->direccion);

    free(a4);
    free(a5);
    free(a6);
}

void Lectura(struct alumno *a)
{
    printf("\nIngrese la matricula del alumno:");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("\nIngrese el nombre del alumno:");
    fgets(a->nombre, 20, stdin);
    a->nombre[strcspn(a->nombre, "\n")];
    fflush(stdin);
    printf("\nIngrese la carrera del alumno:");
    fgets(a->carrera, 20, stdin);
    a->carrera[strcspn(a->carrera, "\n")] = '\0';
    printf("\nIngrese el promedio del alumno:");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("\nIngrese la direccion del alumno:");
    fgets(a->direccion, 20, stdin);
    a->direccion[strcspn(a->direccion, "\n")] = '\0';
}

