#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = '\0'; // Remove newline character
    printf("\nIngrese el departamento de la empresa: ");
    fgets(a->departamento, sizeof(a->departamento), stdin);
    a->departamento[strcspn(a->departamento, "\n")] = '\0'; // Remove newline character
    printf("\nIngrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    getchar(); // Consume newline character left by scanf
    printf("_-Ingrese la direccion del empleado_-");
    printf("\n\tCalle: ");
    fgets(a->direccion.calle, sizeof(a->direccion.calle), stdin);
    a->direccion.calle[strcspn(a->direccion.calle, "\n")] = '\0'; // Remove newline character
    printf("\nNumero: ");
    scanf("%d", &a->direccion.numero);
    getchar(); // Consume newline character left by scanf
    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    getchar(); // Consume newline character left by scanf
    printf("\tLocalidad: ");
    fgets(a->direccion.localidad, sizeof(a->direccion.localidad), stdin);
    a->direccion.localidad[strcspn(a->direccion.localidad, "\n")] = '\0'; // Remove newline character
}

int main(void) {
    struct empleado e0 = {"Arturo", "compras", 15500.75, {"San Jeronimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Ingrese el nombre del empleado 1: ");
    fgets(e1->nombre, sizeof(e1->nombre), stdin);
    e1->nombre[strcspn(e1->nombre, "\n")] = '\0'; // Remove newline character
    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, sizeof(e1->departamento), stdin);
    e1->departamento[strcspn(e1->departamento, "\n")] = '\0'; // Remove newline character
    printf("\nIngrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    getchar(); // Consume newline character left by scanf
    printf("_-Ingrese la direccion del empleado_-");
    printf("\n\tCalle: ");
    fgets(e1->direccion.calle, sizeof(e1->direccion.calle), stdin);
    e1->direccion.calle[strcspn(e1->direccion.calle, "\n")] = '\0'; // Remove newline character
    printf("\nNumero: ");
    scanf("%d", &e1->direccion.numero);
    getchar(); // Consume newline character left by scanf
    printf("\tCodigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    getchar(); // Consume newline character left by scanf
    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, sizeof(e1->direccion.localidad), stdin);
    e1->direccion.localidad[strcspn(e1->direccion.localidad, "\n")] = '\0'; // Remove newline character

    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e2 == NULL) {
        printf("Memory allocation failed\n");
        free(e1);
        return 1;
    }
    Lectura(e2);

    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo, e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    free(e1);
    free(e2);

    return 0;
}

