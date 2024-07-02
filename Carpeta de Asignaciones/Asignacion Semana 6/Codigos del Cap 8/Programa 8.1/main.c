#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

void main(void)
{
    struct alumno a1, a2, a3;
    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    printf("\nIngrese la matricula del alumno 2:");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("\nIngrese el nombre del alumno 2:");
    fgets(a2.nombre, 20, stdin);
    a2.nombre[strcspn(a2.nombre, "\n")] = '\0';  // Eliminar el salto de línea

    printf("Ingrese la carrera del alumno 2:");
    fgets(a2.carrera, 20, stdin);
    a2.carrera[strcspn(a2.carrera, "\n")] = '\0';

    printf("Ingrese el promedio del alumno 2:");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 2:");
    fgets(a2.direccion, 20, stdin);
    a2.direccion[strcspn(a2.direccion, "\n")] = '\0';

    printf("\nIngrese la matricula del alumno 3:");
    scanf("%d", &a3.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3:");
    fgets(nom, 20, stdin);
    nom[strcspn(nom, "\n")] = '\0';
    strcpy(a3.nombre, nom);

    printf("Ingrese la carrera del alumno 3:");
    fgets(car, 20, stdin);
    car[strcspn(car, "\n")] = '\0';
    strcpy(a3.carrera, car);

    printf("Ingrese el promedio del alumno 3:");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);

    printf("Ingrese la direccion del alumno 3:");
    fgets(dir, 20, stdin);
    dir[strcspn(dir, "\n")] = '\0';
    strcpy(a3.direccion, dir);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s\n", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}


