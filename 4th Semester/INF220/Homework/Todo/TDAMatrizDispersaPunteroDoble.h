//---------------------------------------------------------------------------

#ifndef TDAMatrizDispersaPunteroDobleH
#define TDAMatrizDispersaPunteroDobleH
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
//---------------------------------------------------------------------------
#endif

struct NodoC
{
    int Col;
    int Dato;
    NodoC * SigCol;
};


struct NodoF
{
    int Fil;
    NodoF * SigF;
    NodoF * AntF;
    NodoC * PtrCol;
};



class TDAMatrizDispersaPunteroDoble
{
      private:
              NodoF *PtrFil;
              int vrep,nf,nc;
      public:
             void crear();
             void dimensionar(int df,int dc);
             int dimension_fila();
             int dimension_columna();
             void poner(int f,int c,int elemento);
             int elemento(int f,int c);
             void definir_valor_repetido(int valor);
             void mostrar();

};