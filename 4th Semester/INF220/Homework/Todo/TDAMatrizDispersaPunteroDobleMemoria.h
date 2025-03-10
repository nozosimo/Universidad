//---------------------------------------------------------------------------

#ifndef TDAMatrizDispersaPunteroDobleMemoriaH
#define TDAMatrizDispersaPunteroDobleMemoriaH

//---------------------------------------------------------------------------
#endif
    #include "SMemoria.h"
    #include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

class TDAMatrizDispersaPunteroDobleMemoria
{
      private:
              SMemoria m;
              int PtrFil;
              int vrep,nf,nc;
      public:
             void crear();
             void dimensionar(int df,int dc);
             void poner(int f,int c,int elemento);
             int elemento(int f,int c);
             void definir_valor_repetido(int valor);
             void mostrar();
             void mostrarMemoria();
};
