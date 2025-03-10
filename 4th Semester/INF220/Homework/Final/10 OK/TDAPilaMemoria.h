/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Pila' usando la clase 'SMemoria'
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAPilaMemoriaH
#define TDAPilaMemoriaH
#endif

#include "SMemoria.h"

SMemoria m;

class TDAPilaMemoria
{
	private:
		int Tope;
	public:
		void crear();
		bool vacia();
		int cima();
		void meter(int elemento);
		void sacar(int &elemento);
        void imprimir();
};
