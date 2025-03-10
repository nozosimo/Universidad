//---------------------------------------------------------------------------

#ifndef TDAPolinomioListaH
#define TDAPolinomioListaH
//---------------------------------------------------------------------------
#endif

#include "TDAListaPuntero.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

#define Lista TDAListaPuntero

class TDAPolinomioLista
{
    private:
            Lista L;
    public:
           void crear();
           void poner_termino(int coe,int exp);
           void mostrar();
           void derivar();
           void sumar(TDAPolinomioLista a,TDAPolinomioLista b);
           void resta(TDAPolinomioLista a,TDAPolinomioLista b);

           bool escero();

           int numero_terminos();
           int exponente(int nro);
           int coeficiente(int exp);

           double evaluar(double x);

};
