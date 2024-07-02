#include <stdio.h>
#include <string.h>

typedef struct {
    char celular[15];
    char correo[30];
} datos_personales;

typedef struct {
    int matricula;
    char nombre[30];
    char carrera[30];
    float promedio;
    datos_personales personales;
} alumno;

void Lectura(alumno *a);

int main(void) {
    alumno a1 = {120, "maria", "contabilidad", 8.9, {"5-158-40-50", ""}}, a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matricula:");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre:");
    fgets(a2.nombre, sizeof(a2.nombre), stdin);
    a2.nombre[strcspn(a2.nombre, "\n")] = '\0';  // Remove newline character
    printf("Ingrese la carrera:");
    fgets(a2.carrera, sizeof(a2.carrera), stdin);
    a2.carrera[strcspn(a2.carrera, "\n")] = '\0';  // Remove newline character
    printf("Ingrese el promedio:");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electronico:");
    fgets(a2.personales.correo, sizeof(a2.personales.correo), stdin);
    a2.personales.correo[strcspn(a2.personales.correo, "\n")] = '\0';  // Remove newline character

    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    strcpy(a1.personales.correo, "hgimanez@hotmail.com");

    puts(a1.personales.celular);
    puts(a1.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("Ingrese el telefono celular del alumno 2:");
    fflush(stdin);
    fgets(a2.personales.celular, sizeof(a2.personales.celular), stdin);
    a2.personales.celular[strcspn(a2.personales.celular, "\n")] = '\0';  // Remove newline character

    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

    return 0;
}

void Lectura(alumno *a) {
    printf("\nIngrese la matricula:");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre:");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = '\0';
    printf("Ingrese la carrera:");
    fgets(a->carrera, sizeof(a->carrera), stdin);
    a->carrera[strcspn(a->carrera, "\n")] = '\0';
    printf("Ingrese el promedio:");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el telefono celular:");
    fgets(a->personales.celular, sizeof(a->personales.celular), stdin);
    a->personales.celular[strcspn(a->personales.celular, "\n")] = '\0';
    printf("Ingrese el correo electronico:");
    fgets(a->personales.correo, sizeof(a->personales.correo), stdin);
    a->personales.correo[strcspn(a->personales.correo, "\n")] = '\0';
}
