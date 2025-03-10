//---------------------------------------------------------------------------

#ifndef TDAColaPunteroH
#define TDAColaPunteroH
#include <stddef.h>
#include <iostream>
//---------------------------------------------------------------------------
#endif

struct NodoC
{
    int elemento;
    NodoC *Sig;
};

class TDAColaPuntero
{
    private:
            NodoC *ini;
            NodoC *fin;
    public:
           void crear();
           bool vacia();
           int primero();
           void poner(int e);
           void sacar(int &e);
};
