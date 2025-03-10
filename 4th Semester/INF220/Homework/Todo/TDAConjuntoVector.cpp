//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAConjuntoVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAConjuntoVector::crear()
{
    cant = 0;
	  for(int i=1;i<=maxi;++i)
	  {
          v[i]=false;
      }
}

bool TDAConjuntoVector::vacio()
{
    return (cant==0);
}

int TDAConjuntoVector::cardinal()
{
    return cant;
}

bool TDAConjuntoVector::pertenece(int e)
{
    return v[e];
}

void TDAConjuntoVector::inserta(int e)
{
	if(!pertenece(e))
	{
		v[e]=true;
        cant++;
    }
}

int TDAConjuntoVector::ordinal(int e)
{
	int resp = 0;
	for(int i=0;i<=maxi;++i)
	{
		if(v[i]!=0)
		{
			resp++;
            if(e==i)return resp;
        }
	}
    return resp;
}

void TDAConjuntoVector::suprime(int e)
{
	if(pertenece(e))
	{
		v[e]=false;
		cant--;
	}

}

int TDAConjuntoVector::muestrea()
{
	std::srand((int)time(0));
	int r = (std::rand() % maxi) + 1;
	if(pertenece(v[r]))
	{
        return v[r];
	}else
	{
        return 0;
    }

	return v[r];
}

void TDAConjuntoVector::imprime()
{
    int t = 0;
	std::cout<<"[";
	for(int i=1;i<=maxi;++i)
	{
		if(v[i])
		{
            t++;
			std::cout<< (i) <<((t<cant)?", ":"") ;
		}
	}std::cout<<"]"<<std::endl;
}

