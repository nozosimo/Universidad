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

char TDAPilaPuntero::cima()
{

	return Tope->elemento;

}

void TDAPilaPuntero::meter(char elemento)
{
    Nodo *aux = new Nodo; // Aqui se hace uso del PUNTERO
	aux->elemento = elemento;
	aux->sig = Tope;
	Tope = aux;
}


void TDAPilaPuntero::sacar(char &dato)
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

