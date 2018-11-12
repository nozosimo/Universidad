//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAColaVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAColaVector::crear()
{
    fin = 0;
    ini = 1;

}

void TDAColaVector::poner(int e)
{
    if(fin<MAX)
    {
        fin++;
        v[fin]=e;
    }
}

void TDAColaVector::sacar(int &E)
{
    if(!vacia())
    {
        E = v[ini];
        ini++;
    }
}

bool TDAColaVector::vacia()
{
    return (fin==0);
}

int TDAColaVector::primero()
{
    return v[ini];
}
