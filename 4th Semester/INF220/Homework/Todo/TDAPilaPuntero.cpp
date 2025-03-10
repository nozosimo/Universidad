//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAPilaPuntero.h"
// Define el NULL
#include <stddef.h>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAPilaPuntero::crear()
{
    Tope = NULL;
}

bool TDAPilaPuntero::vacia()
{
    return (Tope==NULL);
}

int TDAPilaPuntero::cima()
{

	return Tope->elemento;

}

void TDAPilaPuntero::meter(int elemento)
{
    Nodo *aux = new Nodo; // Aqui se hace uso del PUNTERO
	aux->elemento = elemento;
	aux->sig = Tope;
	Tope = aux;
}


void TDAPilaPuntero::sacar(int &dato)
{
	Nodo *aux = Tope;
	dato = aux->elemento;
	Tope = aux->sig;
    delete(aux);

}

void TDAPilaPuntero::imprimir()
{
    Nodo *aux = Tope;
     while (aux != NULL) {
			int dato = aux->elemento;
			std::cout<<dato<<std::endl;
			aux = aux->sig;
		}

}
