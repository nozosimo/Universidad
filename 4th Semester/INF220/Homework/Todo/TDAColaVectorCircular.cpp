//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAColaVectorCircular.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void TDAColaVectorCircular::crear()
{
    fin = 0;
    ini = 1;
}

int siguiente(int d)
{
    return (d%MAX)+1;
}

void TDAColaVectorCircular::poner(int e)
{
     if(siguiente(siguiente(fin))!=ini)
     {
         fin=siguiente(fin);
         v[fin]=e;
     }
}

int TDAColaVectorCircular::primero()
{
    return v[ini];
}

bool TDAColaVectorCircular::vacia()
{
    return (fin==0);
}

void TDAColaVectorCircular::sacar(int &e)
{
    if(!vacia())
    {
        e = v[ini];
        ini = siguiente(ini);
    }
}
