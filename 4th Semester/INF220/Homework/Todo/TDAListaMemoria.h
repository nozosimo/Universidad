/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Lista' usando la Clase 'SMemoria'
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAListaVectorH
#define TDAListaVectorH
#endif

#include "SMemoria.h"


class TDAListaMemoria
{
    private:
		int Longitud;

	public:
		SMemoria m;
		int PtrElemento;
		// Constructor
		void crear();
		int primero();
		bool vacia();
		int siguiente(int direccion);
		int anterior(int direccion);
		int fin();
		int recupera(int direccion);
		int longitud();
		void inserta(int direccion,int elemento);
		void modifica(int direccion,int elemento);
		void suprime(int direccion);
		void imprimir();
};