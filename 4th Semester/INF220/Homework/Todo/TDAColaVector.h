//---------------------------------------------------------------------------

#ifndef TDAColaVectorH
#define TDAColaVectorH
//---------------------------------------------------------------------------
#endif

static const int MAX = 100;
class TDAColaVector
{
    private:
            int v[MAX];
            int ini,fin;
    public:
           void crear();
           bool vacia();
           void poner(int e);
           void sacar(int &E);
           int primero();

};