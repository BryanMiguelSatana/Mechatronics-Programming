#include <stdio.h>
#include <stdlib.h>
typedef int Telemento;
typedef struct Registro
 {
     Telemento e;
     struct Registro* Sig;
 }Nodo;

 void Vacial (Nodo ** L)
 {
     *L = NULL;

 }
 int EsVacial (Nodo * L)
 {
     return (L== NULL);

 }
 void AnadePL (Nodo** L, Telemento e)
  {
       Nodo *Nuevo;
       Nuevo = (Nodo*)malloc(sizeof(Nodo));
       Nuevo -> e= e;
       Nuevo -> Sig = *L;
       *L = Nuevo;
  }
  void BorraPL (Nodo**L)
  {
      Nodo *Ptr;
      Ptr= *L;
      if (Ptr == NULL)
      {
          printf ("error en borrar P");
          return;
      }
      *L= Ptr->Sig;
      free (Ptr);
  }
  Nodo*Resto(Nodo *L)
  {
      if (L== NULL)
      {
          printf ("error en el restol \n");
          return NULL;
      }
      return L->Sig;
  }
  void ModificaL(Nodo**L, Telemento e)
  {
      if (L==NULL)
      {
          printf ("error en ModificaL \n");
          return;
      }
      (*L)->e= e;
  }
  Telemento PrimeroL (Nodo*L)
  {
      if (L==NULL)
      {
          printf ("error en PrimeroL \n");
          return NULL;
      }
      return L->e;
  }


