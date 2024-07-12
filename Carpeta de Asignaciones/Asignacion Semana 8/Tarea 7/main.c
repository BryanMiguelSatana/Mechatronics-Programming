#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[50];
    float nota;
} Alumno;

void grabar_datos(Alumno *alumnos, int cantidad_alumnos) {
    FILE *archivo = fopen("alumnos.dat", "wb");
    if (archivo == NULL) {
        printf("\nError al abrir archivo\n");
        return;
    }

    fwrite(alumnos, sizeof(Alumno), cantidad_alumnos, archivo);
    fclose(archivo);
}

void leer_datos(Alumno **alumnos, int *cantidad_alumnos) {
    FILE *archivo = fopen("alumnos.dat", "rb");
    if (archivo == NULL) {
        printf("\nNo hay registros guardados\n");
        return;
    }

    fseek(archivo, 0, SEEK_END);
    *cantidad_alumnos = ftell(archivo) / sizeof(Alumno);
    rewind(archivo);

    *alumnos = (Alumno *)malloc((*cantidad_alumnos) * sizeof(Alumno));
    if (*alumnos == NULL) {
        printf("\nError al reservar memoria\n");
        fclose(archivo);
        return;
    }

    fread(*alumnos, sizeof(Alumno), *cantidad_alumnos, archivo);
    fclose(archivo);
}

void mostrar_menu(int *opcion) {
    printf("\nMenu:\n");
    printf("1. Grabar datos\n");
    printf("2. Leer datos\n");
    printf("3. Salir del programa\n");

    printf("Seleccione una: ");
    scanf("%d", opcion);
}

int main() {
    Alumno *alumnos = NULL;
    int cantidad_alumnos = 0;
    int opcion;

    do {
        mostrar_menu(&opcion);

        switch (opcion) {
            case 1: {
                int agregar_mas;
                do {
                    alumnos = (Alumno *)realloc(alumnos, (cantidad_alumnos + 1) * sizeof(Alumno));
                    if (alumnos == NULL) {
                        printf("\nError al reservar memoria\n");
                        return 1;
                    }

                    printf("Ingrese Matricula: ");
                    scanf("%d", &alumnos[cantidad_alumnos].matricula);
                    printf("Ingrese nombre: ");
                    scanf(" %[^\n]s", alumnos[cantidad_alumnos].nombre); // Permitir espacios en el nombre
                    printf("Ingrese nota: ");
                    scanf("%f", &alumnos[cantidad_alumnos].nota);

                    cantidad_alumnos++;

                    printf("Desea grabar otro registro? (1: Si, 0: No): ");
                    scanf("%d", &agregar_mas);
                } while (agregar_mas);

                grabar_datos(alumnos, cantidad_alumnos);
                break;
            }
            case 2: {
                leer_datos(&alumnos, &cantidad_alumnos);
                if (cantidad_alumnos > 0) {
                    for (int i = 0; i < cantidad_alumnos; i++) {
                        printf("Matricula: %d, Nombre: %s, Nota: %.2f\n", alumnos[i].matricula, alumnos[i].nombre, alumnos[i].nota);
                    }
                } else {
                    printf("No hay alumnos registrados.\n");
                }
                break;
            }
            case 3:
                break;
            default:
                printf("\nOpcion invalia (o eploto o fue invalido)\n");
        }
    } while (opcion != 3);

    free(alumnos);

    return 0;
}
