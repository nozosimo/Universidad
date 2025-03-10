/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Conjunto' usando la clase 'Lista'
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAConjuntoListaH
#define TDAConjuntoListaH
#endif

// Define el NULL
#include <stddef.h>
#include "TDAListaPuntero.h"

class TDAConjuntoLista
{
	private:
		TDAListaPuntero L;
	public:
		void crear();
		void inserta(int e);
		void suprime(int e);
        void imprimir();

		bool vacio();
        bool pertenece(int e);

		int cardinal();
        void Union(TDAConjuntoLista A,TDAConjuntoLista B);
        void Interseccion();
        void Complemento();



};