//---------------------------------------------------------------------------

#ifndef TDAConjuntoMemoriaH
#define TDAConjuntoMemoriaH
//---------------------------------------------------------------------------
#endif

#include <iostream>
#include "SMemoria.h"

class TDAConjuntoMemoria
{
	private:
		SMemoria m;
		int cant;
		int PtrConj;
	public:
		void crear();
		void inserta(int e);
		void suprime(int e);
        void imprime();

		int cardinal();
		int ordinal(int e);

		bool pertenece(int e);
		bool vacio();

};
