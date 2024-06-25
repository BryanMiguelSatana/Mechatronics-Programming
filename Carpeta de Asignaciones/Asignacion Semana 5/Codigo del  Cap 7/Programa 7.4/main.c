#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *cad0;
    cad0 = "argentina";
    puts(cad0);

    cad0 = "brasil";

    char cad1[100];
    gets(cad1);

    char cad2[20] = "mexico";
    puts(cad2);

    gets(cad2);

    puts(cad2);

    strcpy(cad2, "Guatemala");

    printf("Cadena modificada: %s\n", cad2);

    return 0;
}
