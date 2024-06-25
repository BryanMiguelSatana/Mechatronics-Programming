#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;

    printf("Ingrese una cadena de caracteres: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("\nCadena modificada: %s", str);
}
