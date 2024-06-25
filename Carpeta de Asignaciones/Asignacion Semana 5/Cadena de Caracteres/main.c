#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, lower = 0, upper = 0, digits = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            lower++;
        else if (isupper(str[i]))
            upper++;
        else if (isdigit(str[i]))
            digits++;
    }

    printf("\nNúmero de letras minúsculas: %d", lower);
    printf("\nNúmero de letras mayúsculas: %d", upper);
    printf("\nNúmero de dígitos: %d\n", digits);
}
