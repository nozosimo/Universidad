//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAPilaMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void TDAPilaMemoria::crear()
{
    Tope = 0;
}

bool TDAPilaMemoria::vacia()
{
    return (Tope==0);
}

int TDAPilaMemoria::cima()
{
	if(vacia())
	{
        throw("Error...");
	}else
	{
		return m.obtener_dato(Tope,1);
	}
}

void TDAPilaMemoria::meter(int elemento)
{
	int aux = m.new_espacio(2);
	if(aux!=-1)
	{
		m.poner_dato(aux,1,elemento);
		m.poner_dato(aux,2,Tope);
        Tope = aux;
	}else
	{
        throw("Error...");
    }
}

void TDAPilaMemoria::sacar()
{
	if(vacia())
	{
        throw("Error...");
	}else
	{
        // Implementar
    }
}
