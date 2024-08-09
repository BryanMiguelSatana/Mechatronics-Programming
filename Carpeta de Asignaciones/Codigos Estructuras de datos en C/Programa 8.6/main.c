#include <stdio.h>
#include <stdlib.h>
#include<math.h>

typedef struct
{
    int Exponente;
    float Coeficiente;
}Telemento;
struct polinomio
{
    Telemento el;
    struct polinomio *Sig;
};
typedef struct polinomio Polinomio;
Polinomio* NuevoNodo(Telemento el)
{
    Polinomio *NodoNuevo;
    NodoNuevo= (Polinomio*)malloc (sizeof(Polinomio));
    NodoNuevo->el= el;
    NodoNuevo->Sig= NULL;
    return NodoNuevo;
}
void AgregaTermino (Telemento el, Polinomio ** Primero, Polinomio**Ultimo)
/*Agrega al polinomio con primer nodo Primero con ultimo Ultimo el termino el*/
{
    Polinomio *Aux;
    Aux= NuevoNodo (el);
    if (*Ultimo ==NULL)                                                /*no hay elementos en la lista*/
    *Primero= Aux;
    else
        (*Ultimo)->Sig= Aux;
    *Ultimo = Aux;
}
void SumaPolinomios (Polinomio *p, Polinomio *q, Polinomio **Suma)
{
    /*Efecto suma los polinomios p,q y lo deja en Suma. Modifica suma*/
    float c;
    Telemento e;
    Polinomio *Primero, *Ultimo;
    Primero= NULL;
    Ultimo=NULL;                   /*se crea la lista vacia de elementos*/
    while ((p !=NULL)&&(q!=NULL) )
        if (p->el.Exponente == ->el.Exponente)
    {
        c= p->el.Coeficiente +q->el.Coeficiente;
        if (fabs(c)>0.00001)
        {
            /*c<>0 hay que añadir un nuevo elemento a la suma de polinomios*/
            e.Coeficiente=c;
            e.Exponente= p->el.Exponente;
            AgregaTermino (e,&Primero, &Ultimo);
        }
        /*no necesita else el coeficiente es cero y no se añade a la suma*/
        p= p->Sig;
        q= q->Sig;                           /*se avanza en los dos polinomios*/
    }
    else
        if (p->el.Exponente >q->el.Exponente)
    {
        AgregaTermino (p->el,&Primero,&Ultimo);
        p=p->Sig;                       /*Se avanza solo en el polinomio*/
    }
    else
    {
                                           /*q->el.Exponente > p^.el.Exponete*/
        AgregaTermino (q->el,&Primero, &Ultimo);
        q=q->Sig;                              /*se avanza solo en el polinomio*/
    }
    /* 0 bien el polinomio p o bien el polinomio q se ha terminado */

    while (p!= NULL)
    {
        AgregaTermino (p->el, &Primero, &Ultimo);
        q= q->Sig;                                       /*se avanza solo en el polinomio*/

    }
    *Suma= Primero;
                   /*Se toma el primer elemento de la lista como el polinomio suma*/

}
void CambiadeSigno (Polinomio **q)
 {
     Polinomio *Aux;                                /*cambia de signo el polinomio q*/

     Aux= *q;
     while (Aux != NULL)
     {
         Aux->el.Coeficiente= -Aux->el.Coeficiente;
         Aux= Aux->Sig;


     };
     *q= Aux;
 };

 void RestaPolinomios (Polinomio *p, Polinomio *q, Polinomio **Suma)
 {
                               /*al polinomio p le resta el polinomio q y lo deja en resta*/
    CambiadeSigno (&q);
    SumaPolinomios (p,q, Suma);
    CambiadeSigno (&q);            /*para no modificar el polinomio q*/
 }
 void MultiplicaPorMonomio (Polinomio *p, Polinomio *Monomio, Polinomio **Pro)
 {
                           /*multiplica el polinomio p por el monomio y deja el resultado en pro*/
    Telemento x, y,z;
    Polinomio *Aux, *Primero, *Ultimo;
    Primero = NULL;
    Ultimo = NULL;
    Aux= p;
    y= Monomio ->el;
    while (Aux != NULL)
    {
        x= Aux ->el;
        z.Exponente= x.Exponente + y.Exponente;
        z.Coeficiente= x.Coeficiente * y.Coeficiente;
        AgregaTermino (z, &Primero, &Ultimo);
        Aux= Aux->Sig;
    }
    *Pro= Primero;
 }
 void MultiplicaPolinomios(Polinomio *p, Polinomio *q, Polinomio ** Producto)
{ /*Efecto multiplica p por q y lo deja en Producto. Modifica Producto*/
Polinomio *Aux, *Aux1, *ProductoAuxiliar;
*Producto = NULL;
Aux = p;
Aux1 = q;
while (Aux1 != NULL)
{
MultiplicaPorMonomio(Aux, Aux1, &ProductoAuxiliar);
SumaPolinomios(*Producto, ProductoAuxiliar, Producto);
Aux1 = Aux1->Sig;
}
