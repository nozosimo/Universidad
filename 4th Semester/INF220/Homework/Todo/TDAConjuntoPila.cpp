//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAConjuntoPila.h"
#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAConjuntoPila::crear()
{
    P.crear();
}

void TDAConjuntoPila::inserta(int e)
{
	P.meter(e);
}

bool TDAConjuntoPila::pertenece(int e)
{
	bool ans = false;
	TDAPilaPuntero aux;
    aux.crear();
	while(!P.vacia())
	{
		int x;
		P.sacar(x);
        aux.meter(x);
		if(x==e)
		{
            ans=true;
        }

	}

	while(!aux.vacia())
	{
		int x;
		aux.sacar(x);
        P.meter(x);
    }

    return ans;

}

void TDAConjuntoPila::suprime(int e)
{
	TDAPilaPuntero aux;
    aux.crear();
	while(!P.vacia())
	{
		int x;
		P.sacar(x);
		if(x!=e)
		{
           aux.meter(x);
        }
	}
	while(!aux.vacia())
	{
		int x;
		aux.sacar(x);
        P.meter(x);
    }


}

void TDAConjuntoPila::imprimir()
{
    P.imprimir();
}

bool TDAConjuntoPila::vacio()
{
    return P.vacia();
}

