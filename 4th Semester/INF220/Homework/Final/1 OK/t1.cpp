#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <string>
#include "TDAPilaPuntero.h"

int prec(char c)
{
      if(c=='^')
      {
          return 3;
      }else if(c=='*' || c=='/')
      {
          return 2;
      }else if(c=='+' || c=='-')
      {
          return 1;
      }else
      {
          return -1;
      }
}


string INFIJOPOSTFIJO(string s)
{
    TDAPilaPuntero Pila;
    Pila.crear();
    Pila.meter(int('N'));
    int l = s.size();
    string ns;
    for(int i = 0; i < l; i++)
    {

        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
        ns+=s[i];


        else if(s[i] == '(')

        Pila.meter(int('('));


        else if(s[i] == ')')
        {
            while(Pila.cima()!= 'N' && Pila.cima() != '(')
            {
                int x;
                char c = Pila.cima();
                Pila.sacar(x);
               ns += c;
            }
            if(Pila.cima() == '(')
            {
                int x;
                char c = Pila.cima();
                Pila.sacar(x);
            }
        }


        else{
            while(Pila.cima() != 'N' && prec(s[i]) <= prec(Pila.cima()))
            {
                int x;
                char c = Pila.cima();
                Pila.sacar(x);
                ns += c;
            }
            Pila.meter(s[i]);
        }

    }

    while(Pila.cima() != 'N')
    {
        int x;
        char c = Pila.cima();
        Pila.sacar(x);
        ns += c;
    }

    return ns;

}

string INFIJOPREFIJO(string  infijo)
{
     int l = infijo.size();
     reverse(infijo.begin(),infijo.end());
     for(int i=0;i<l;++i)
     {
         if(infijo[i]=='(')
         {
             infijo[i]=')';
             i++;
         }else if(infijo[i]==')')
         {
             infijo[i]='(';
             ++i;
         }
     }
     string prefijo = INFIJOPOSTFIJO(infijo);
     reverse(prefijo.begin(),prefijo.end());
     return prefijo;
}





int main()
{
    string expresion = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<INFIJOPOSTFIJO(expresion)<<endl;
    cout<<INFIJOPREFIJO(expresion)<<endl;

	getch();
	return 0;
}


