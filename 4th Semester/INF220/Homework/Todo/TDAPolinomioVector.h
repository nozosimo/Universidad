//---------------------------------------------------------------------------

#ifndef TDAPolinomioVectorH
#define TDAPolinomioVectorH

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <math.h>
//---------------------------------------------------------------------------
#endif

#define TDAPolinomioVector Polinomio


class TDAPolinomioVector
{
    private:
           int VC[100],VE[100];
            int nt;
    public:

           void crear();
           bool escero();
           void poner_termino(int coe,int exp);
           int coeficiente(int exp);
           int exponente(int nro_termino);
           int grado();
           int numero_terminos();
           void mostrar();
           void suma(Polinomio a,Polinomio b);
           void resta(Polinomio a,Polinomio b);
           void derivar();
           double area(double a,double b,double dx);
           double evaluar(double x);

};