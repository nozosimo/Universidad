//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAPolinomioPuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAPolinomioPuntero::crear()
{
     nt = 0;
     PtrPoli = NULL;
}

bool TDAPolinomioPuntero::escero()
{
     return (nt==0);
}

int TDAPolinomioPuntero::numero_terminos()
{
    return nt;
}


int TDAPolinomioPuntero::grado()
{
    int grad=0;
    Nodo *aux = PtrPoli;
    while(aux!=NULL)
    {
        grad = std::max(grad,aux->Exp);
        aux=aux->Sig;
    }
    return grad;
}

std::string TDAPolinomioPuntero::mostrar()
{
     std::string x="";
     std::stringstream ss;
     for(int i=1;i<=numero_terminos();++i)
    {
        int exp = exponente(i);
        int coe = coeficiente(exp);

        if(coe>0 && i>1)
        {
             x+="+";
        }
        if(coe==-1)
        {
             x+="-";
        }else
        if(coe!=1)
        {
           ss<<coe;
           std::string aux ;
           ss>>aux;
           x+=aux;
            //std::cout<<coe;
        }

        if(exp>1)
        {            ss<<exp;
                     std::string aux ;
                     ss>>aux;
                  x+="x^"+aux;
            ///td::cout<<"x^"<<exp;
        }else
        if(exp==1)
        {
             x+="x";
        }


    }     //std::cout<<std::endl;

     return x;
}


void TDAPolinomioPuntero::poner_termino(int coe,int exp)
{
    Nodo *x = PtrPoli;
    Nodo *prev;
    bool existe = false;
    while(x!=NULL)
    {
       if(x->Exp==exp)
       {
           existe = true;
           break;
       }
       prev = x;
       x=x->Sig;
    }


    if(!existe)
    {
        Nodo *aux = new Nodo;
        if(aux!=NULL)
        {
            aux->Coef = coe;
            aux->Exp  = exp;
            aux->Sig  = PtrPoli;
            PtrPoli = aux;
            nt++;
        }
    }else
    {
         x->Coef+=coe;

         if(x->Coef==0)
         {
             nt--;
             if(x==PtrPoli)
              {
                PtrPoli = x->Sig;
                delete(x);
             }else
             if(x->Sig==NULL)
             {
                prev->Sig = NULL;
                delete(x);
             }else
             {
                 prev->Sig = x->Sig;
                 delete(x);
             }

         }



    }
}


int TDAPolinomioPuntero::coeficiente(int exp)
{
    Nodo *aux = PtrPoli;
    while(aux!=NULL)
    {
        if(aux->Exp==exp)
        {
            return aux->Coef;
        }
        aux=aux->Sig;
    }
    return -1;
}


int TDAPolinomioPuntero::exponente(int nro)
{
   Nodo *aux = PtrPoli;
   int i = 1;

    while(aux!=NULL && i<=nro)
    {
        if(i==nro)
        {
            return aux->Exp;
        }
        aux=aux->Sig;
        ++i;
    }
    return -1;
}

void TDAPolinomioPuntero::suma(TDAPolinomioPuntero a,TDAPolinomioPuntero b)
{
    for(int i=1;i<=a.numero_terminos();++i)
    {
        int exp = a.exponente(i);
        int coe = a.coeficiente(exp);
        poner_termino(coe,exp);
    }
    for(int i=1;i<=b.numero_terminos();++i)
    {
        int exp = b.exponente(i);
        int coe = b.coeficiente(exp);
        poner_termino(coe,exp);
    }
}

void TDAPolinomioPuntero::resta(TDAPolinomioPuntero a,TDAPolinomioPuntero b)
{
    for(int i=1;i<=a.numero_terminos();++i)
    {
        int exp = a.exponente(i);
        int coe = a.coeficiente(exp);
        poner_termino(coe,exp);
    }
    for(int i=1;i<=b.numero_terminos();++i)
    {
        int exp = b.exponente(i);
        int coe = b.coeficiente(exp);
        poner_termino(-coe,exp);
    }
}

void TDAPolinomioPuntero::derivar()
{
    Nodo *aux = PtrPoli;
    while(aux!=NULL)
    {
        aux->Coef*=aux->Exp;
        aux->Exp--;
        aux=aux->Sig;
    }
}

double pot(double base, int exponente)
{
   double ans = 1;

    for(int i=1;i<=exponente;++i)
    {
        ans*=base;
    }

    return ans;
}

double TDAPolinomioPuntero::evaluar(double x)
{
    double fx = 0;
      for(int i=1;i<=numero_terminos();++i)
    {
        int exp = exponente(i);
        int coe = coeficiente(exp);

        fx+=double(coe)*pot(x,exp);
    }
    return fx;
}

double TDAPolinomioPuntero::area(double a,double b,double dx)
{
    float aux = (b-a)/dx;
    int intervalos = aux;

    double area = 0;
    for(int i=0;i<intervalos;++i)
    {
            double y =evaluar(a);
            area += abs(y*dx);
             a+=dx;
    }

    return area;
}
