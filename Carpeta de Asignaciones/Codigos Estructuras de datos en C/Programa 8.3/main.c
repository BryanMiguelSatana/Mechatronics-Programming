int NumeroDeNodosDeLaLista (Nodo*L)
{
    int K= 0;
    Nodo *p;
    p=L;
    while (p != NULL)
    {
        k++;
        p= p->Sig;

    }
    return (k);
}
void EliminaPosicion (Nodo** L, int i)
{
    int K= 0;
    Nodo *Ptr,*Ant;
    Ant= NULL;
    while  ((k < i) && (Ptr !=NULL))
    {
        k++;
        Ant= Ptr;
        Ptr= Ptr->Sig;
        else
            Ant->Sig= Ptr->Sig;
        free (Ptr);
    }
}

void InsertLista(Nodo* Ant,Telemento e)
{
    Nodo *Nuevo;
    Nuevo= (Nodo*)malloc (sizeof(Nodo));
    Nuevo -> e = e;
    Nuevo ->Sig = Ant->Sig;
    Ant->Sig= Nuevo;
}
Nodo* BuscarEnlista (Nodo*L, Telemento e)
{
    Nodo *Ptr;
    for (Ptr= L; Ptr != NULL; Ptr= Ptr ->Sig)
        if (Ptr-> e==e)
        return Ptr;
        return NULL;                        /*No encontrado*/
}
