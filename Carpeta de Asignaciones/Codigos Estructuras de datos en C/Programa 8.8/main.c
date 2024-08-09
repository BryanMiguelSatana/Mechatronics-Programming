#include <stdio.h>
struct lista
{
    int x;
    struct lista *Sig;

};
typedef struct lista Lista;
void ordena (Lista **L, int n)
{
    int i,j;
    Auxuliar= *L;
    Anterior=NULL;
    while (j<= (n-i))
    {
        Auxiliar1= Auxiliar->Sig;
        if (Auxiliar->x >Auxiliar->x)
        {
            Auxiliar->Sig=Auxiliar1->Sig;
            Auxiliar->Sig=Auxiliar;
            if (Anterior ==NULL)
            {
                *L=Auxiliar1;
                Anterior=*L;

            }

            else
            {
                Anterior->Sig= Auxiliar1;
                Anterior= Auxiliar1;
            }
            Auxiliar= Anterior->Sig;
        }
        else
        {
            Anterior=Auxiliar1;
            Auxiliar= Auxiliar1;
        }
        j++;
    }
}
