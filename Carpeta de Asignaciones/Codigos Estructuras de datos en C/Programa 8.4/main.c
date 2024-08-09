void MezclarListasOrdenadas (Nodo *L1, Nodo *L2, Nodo **L3)
{
    Nodo *Puntero 1, *Puntero2, *Primero, *Ultimo, *NodoNuevo;
    NodoNuevo= NodoNuevo (-32767)
    Primero= NodoNuevo;
    Ultimo= NodoNuevo;
    Puntero1= L1;
    Puntero2=L2;
    while (Puntero 1 && Puntero2)
        if (Puntero1->e < Puntero2->e)
    {
        NodoNuevo= NuevoNodo (Puntero1->e);
        Ultimo->Sig= NodoNuevo;
        Ultimo= NodoNuevo;
        Puntero1= Puntero1->Sig;
    }
    else
    {
        NodoNuevo= NuevoNodo (Puntero1->e);
        Ultimo->Sig=NodoNuevo;
        Ultimo= NodoNuevo;
        Puntero1= Puntero1->Sig;

    }
    while (Puntero1)
    {
        NodoNuevo= NuevoNodo (Puntero1->e);
        Ultimo->Sig= NodoNuevo;
        Ultimo= NodoNuevo;
        Puntero1= Puntero1->Sig;

    }
    while (Puntero2)
    {
        NodoNuevo= NuevoNodo (Puntero2->e);
        Ultimo->Sig= NodoNuevo;
        Ultimo= NodoNuevo;
        Puntero2= Puntero2->Sig;
    }
    L3=Primero->Sig;     /*La lista comienza en el siguiente Primero*/
    free (Primero);

    }
