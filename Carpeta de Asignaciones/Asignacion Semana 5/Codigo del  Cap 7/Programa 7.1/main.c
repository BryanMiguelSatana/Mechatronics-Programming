#include <stdio.h>
#include <stdlib.h>

void (main)(void)
{
    char p1, p2,p3 ='$';
    printf("\ningrese un caracter:");
    p1=getchar();
    putchar(p1);

    printf("\n");
    fflush(stdin);

    printf("\nEl caracter p3 es:");
    putchar(p3);
    printf("\n");

    printf("\ningrese otro caracter:");
    fflush(stdin);
    printf("%c",p2);
}
