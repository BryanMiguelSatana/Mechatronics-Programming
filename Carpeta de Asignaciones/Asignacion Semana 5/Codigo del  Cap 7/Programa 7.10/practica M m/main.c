#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    char mayuscula, minuscula;

    // Solicita al usuario que ingrese una letra mayúscula
    printf("Ingrese una letra mayúscula: ");
    scanf("%c", &mayuscula);

    // Verifica que la letra ingresada esté en el rango de letras mayúsculas (A-Z)
    if (mayuscula >= 'A' && mayuscula <= 'Z') {
        // Convierte la letra mayúscula a minúscula sumando 32 (diferencia en el código ASCII)
        minuscula = mayuscula + 32;
        printf("La letra minúscula correspondiente es: %c\n", minuscula);
    } else {
        printf("El carácter ingresado no es una letra mayúscula.\n");
    }

    return 0;
}

