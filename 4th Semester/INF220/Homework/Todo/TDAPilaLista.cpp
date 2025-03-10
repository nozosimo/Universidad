//---------------------------------------------------------------------------

#pragma hdrstop

#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>

#include "TDAPilaLista.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

void TDAPilaLista::crear()
{
    L = TDAListaPuntero();
}

void TDAPilaLista::meter(int elemento)
{
	L.insertar(L.primero(),elemento);
}

void TDAPilaLista::sacar(int &elemento)
{
	elemento = L.recupera(L.primero());
    L.suprime(L.primero());
}

bool TDAPilaLista::vacia()
{
    return (L.vacia());
}

int TDAPilaLista::cima()
{
    return L.recupera(L.primero());
}


void espaciosP(int n)
{
	int top = 4;
	int digitos = log10(float(abs(n)))+1;

    if(n<=0)digitos++;

	for(int i=0;i<top-digitos;++i)std::cout<<" ";
}

void TDAPilaLista::imprimir(TDAPilaLista &Pila)
{

    TDAPilaLista aux;
    int i = 0;

	std::cout << "+----+" << std::endl;
	while(!Pila.vacia())
	{
		int x;
		Pila.sacar(x);

		std::cout <<"|";
        espaciosP(x);
		std::cout<< x << "|" << std::endl;
		std::cout << "+----+"  << std::endl;
		aux.meter(x);
        ++i;
	}

	while(i>0)
	{
		int x;
		aux.sacar(x);
		Pila.meter(x);
		i--;
	}
}

