#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

#include "TDAPilaLista.h"

using namespace std;

int main()
{
    bool correcto=true;
    int x;
    string cadena;
    TDAPilaLista Pila;

    Pila.crear();

    cin>>cadena;
    for(int i=0;i<cadena.size();++i)
    {
       if(cadena[i]=='(')
       {
           Pila.meter('(');
       }else
       if(cadena[i]==')')
       {
           if(!Pila.vacia())
           {
             Pila.sacar(x);
           }else
           {
               correcto = false;
           }

       }
    }

    if(correcto && Pila.vacia())
    {
        cout<<"BALANCEADO!"<<endl;
    }else
    {
        cout<<"INCORRECTO!"<<endl;
    }

	getch();
	return 0;
}

