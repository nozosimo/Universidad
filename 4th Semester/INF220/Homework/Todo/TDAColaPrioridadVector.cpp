//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAColaPrioridadVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAColaPrioridadVector::crear()
{
    for(int i=1;i<=MAX;++i)
    {
        VC[i].crear();
        VF[i]=0;
    }

    colaAct=1;
    cant = 0;
}

int TDAColaPrioridadVector::primero()
{
   return VC[colaAct].primero();
}

void TDAColaPrioridadVector::poner(int e,int pri)
{
    VC[pri].poner(e);
    VF[pri]++;
}

void TDAColaPrioridadVector::sacar(int &e)
{
    if(!VC[colaAct].vacia())
    {
        if(cant<VF[colaAct])
        {
            cant++;
            VC[colaAct].sacar(e);
            if(cant==VF[colaAct])
            {
               colaAct++;
               cant = 0;
            }
            if(colaAct>MAX)
            {
                colaAct=1;
            }
        }
    }
}

void TDAColaPrioridadVector::frecuencia_prioridad(int frec,int pri)
{
    VF[pri]=frec;
}
