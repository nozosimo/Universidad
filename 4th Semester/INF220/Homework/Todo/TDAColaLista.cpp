//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAColaLista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAColaLista::crear()
{
    L.crear();
}

void TDAColaLista::poner(int e)
{
    L.insertar(L.fin(),e);
}

void TDAColaLista::sacar()
{
    L.recupera(L.primero());
    L.suprime(L.primero());
}

bool TDAColaLista::vacia()
{
    return L.longitud()==0;
}

int TDAColaLista::primero()
{
    return L.recupera(L.primero());
}
