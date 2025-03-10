/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Conjunto' usando conjunto 'Pila'
*/////////////////////////////////////////////////////////////////////////////
#ifndef TDAConjuntoPilaH
#define TDAConjuntoPilaH
#include "TDAPilaPuntero.h"
#endif

class TDAConjuntoPila
{
	private:
		TDAPilaPuntero P;
	public:
		void crear();
		void inserta(int e);
		void suprime(int e);
        void imprimir();

		bool vacio();
        bool pertenece(int e);

		int cardinal();


};
