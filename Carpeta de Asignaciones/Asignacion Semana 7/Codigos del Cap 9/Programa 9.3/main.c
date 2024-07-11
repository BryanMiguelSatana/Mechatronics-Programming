#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char cad [50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt","w")) != NULL)
    {
        printf("\nDesea ingresar una cadena de caracteres?  SI-1 NO-0:");
        scanf("%d",&res);
        while(res)
        {
            fflush(stdin);
            printf("Ingrese la cadena:");
            gets(cad);
            fputs(cad, ar);
            printf("\nDesea ingresar otra cadena de caracteres? SI-1 NO-0:");
            scanf("%d",&res);
            if (res)
                fputs("\n",ar);

        }
        fclose(ar);
    }
    printf("NOse puede abrir el archivo");
}
