/*divide el polinomio p por el polinomio q y obitiene el Cociente y el Resto*/
void DividePolinomios (Polinomio *p, Polinomio *q, Polinomio **Cociente, Polinomio **Resto)
{
    Polinomio *Dividendo, *Divisor, *Multiplicando, *Suma, *Primero, *Ultimo;
    Telemento x,y,z;
    int expeDividendo, expeDivisor;
    Dividendo= p;
    Divisor= q;
    Primero= NULl;
    Ultimo= NULl;
    if (Divisor == NULL)
        expeDivisor= 32767;
    else
    {
        expeDivisor = Divisor->el.Exponente;
        y= Divisor->el;
    }
    if (Dividendo == NULL)
        expeDividendo= 0;
    else
    {
        expeDividendo= Dividendo->el.Exponente;
        x= Dividendo->.el;
    }
    while (expeDividendo >= expeDivisor)
    {
        z.Exponente= x.Exponente - y.Exponente;
        z.Coeficiente= x.Coeficiente / y.Coeficiente;
        Multiplicando = NuevoNodo(z);
        MultiplicandoPolinomios (Divisor, Multiplicando, &Suma)
        AgregaTermino (z, &Primero, &Ultimo);
        RestaPolinomios (Dividendo, Suma, &Dividendo);
        if (Dividendo ==NULL)
            expeDividendo= 0;
        else
        {
            expeDividendo= Dividendo->el.Exponente;
            x= Dividendo->.el;
        }

    }
    *Cociente= Primero;
    *Resto= Dividendo;
}
/*Evalúa el polinomio p en el punto x*/
float Valor (Polinomio *p, float x)
{
    Polinomio *Aux;
    float Suma;
    Telemento z;
    Suma= 0;
    Aux= p;
    while (Aux != NULL)
    {
        z= Aux->el;
        Suma= Suma + z.Coeficiente *pow(x, z.Exponente);
        Aux= Aux->Sig;
          }
          return (Suma);
}
/*Deriva el polinomio p simbólicamente y deja el resultado en el propio p*/
void Deriva(Polinomio **p)
{
    Polinomio *Aux, *Anterior;
    Telemento y;
    int sw;
    Aux= *p;
    Anterior = NULL;
    sw=0;;
    while (Aux !=NULL)
    {
        y=Aux->el;
        if (y.Exponente==0)
        {
            /* Como el polinomio está ordenado Descendentemente hay que borrar el
ultimo elemento de p ya que la derivada de una constante es cero*/
if (Anterior == NULL)
    *p=NULL;
else
    Anterior->Sig=NULL;
Anterior=Aux;
Aux=NULL;
sw=1;
        }
        else
        {
            y.Coeficiente *y.Exponente;
            y.Exponente -;
            Aux->el=y;
            Anterior= Aux;
            Aux= Aux->Sig;
        }
        if (sw)
            free (Anterior);
    }
}
/*Inserta e en la lista manteniéndola ordenada descendentemente*/
void InsertaOrden (Polinomio **L, Telemento e)
{
    int Encontrado;
    Polinomio *Nuevo, *Aux,*Anterior;
    NuevoNodo (e);
    Aux=*L;
    Encontrado=0;
    while ((Aux !=NULL)&& (! Encontrado))
        if (Aux->el.Exponente >e.Exponente)
    {
        Anterior=Aux;
        Aux= Aux->Sig;
    }
    else
        Encontrado=1;
    if (Aux ==*L)
    {
        Nuevo-Sig= *L;
        *L=Nuevo;
    }
    else
    {
        Nuevo->Sig=Aux;
        Anterior->Sig = Nuevo;
    }
}
/*Lee el polinomio p no necesariamente ordenado pero sin términos repetidos*/

void LeePolinomio (Polinomio **p)
{
    Telemento x;
    *p=NULL;
    do
    {
        scanf ("%f %d", &x.Coeficiente, &x.Exponente);
        if (x.Exponente >=0)
            InsertarOrden (p,x);

    }
    while (x.Exponente >=0);
}
