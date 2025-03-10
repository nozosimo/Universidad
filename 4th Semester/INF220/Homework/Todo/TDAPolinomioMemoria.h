//---------------------------------------------------------------------------

#ifndef TDAPolinomioMemoriaH
#define TDAPolinomioMemoriaH

//---------------------------------------------------------------------------
#endif
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include "SMemoria.h"

class TDAPolinomioMemoria
{
    private:
            int PtrPoli;
            int nt;
            SMemoria m;
    public:
           void crear();
           void poner_termino(int coe,int exp);
           void mostrar();
           void derivar();
           void suma(TDAPolinomioMemoria a,TDAPolinomioMemoria b);
           void resta(TDAPolinomioMemoria a,TDAPolinomioMemoria b);

           int numero_terminos();
           int coeficiente(int nro);
           int exponente(int nro);
           int grado();

           bool escero();

           double evaluar(double x);
           double area(double a,double b,double dx);

};
