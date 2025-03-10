//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAListaMemoria.h"
#include <conio.h>
#include <fstream>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void TDAListaMemoria::crear()
{
	Longitud = 0;
	PtrElemento = NULO;
}

bool TDAListaMemoria::vacia()
{
    return (Longitud == 0);
}


int TDAListaMemoria::fin()
{
    int PtrFin;
	if(vacia())
	{
        throw("Lista Vacia...");
	}else
	{
		int x = PtrElemento;
		while(x!=NULO)
		{
			PtrFin = x;
			x = m.obtener_dato(x,2);
		}
        return PtrFin;
    }

}

int TDAListaMemoria::primero()
{
	if(!vacia())
	{
		return PtrElemento;
	}else
	{
        throw("Lista Vacia...\n");
    }
}

int TDAListaMemoria::siguiente(int direccion)
{
	if(vacia())
	{
        throw("Lista Vacia...");
	}else
	{
		if(direccion == fin())
		{
			throw("Error, Ultima Direccion...");
		}else
		{
            return m.obtener_dato(direccion,2);
        }
    }
}

int TDAListaMemoria::anterior(int direccion)
{
	if(vacia())
	{
        throw("Lista Vacia...");
	}else
	{
		if(direccion==primero())
		{
			throw("Error Primera Direccion");
		}else
		{
			int x = PtrElemento;
			int ant = NULO;
			while(x!=NULO)
			{
				if(x==direccion)
				{
                    return ant;
				}
				ant = x;
				x = m.obtener_dato(x,2);
            }
        }
	}
}

int TDAListaMemoria::recupera(int direccion)
{
	if(vacia())
	{
        throw("Lista Vacia...");
	}else
	{
        return m.obtener_dato(direccion,1);
	}
}

int TDAListaMemoria::longitud()
{
    return Longitud;
}

void TDAListaMemoria::inserta(int direccion,int elemento)
{
	int x = m.new_espacio(2);

	if(x!=NULO)
	{
		m.poner_dato(x,1,elemento);
		m.poner_dato(x,2,NULO);
		if(vacia())
		{
			PtrElemento = x;
            Longitud = 1;
		}else
		{
			Longitud++;
			if(direccion==primero())
			{
				m.poner_dato(x,2,direccion);
                PtrElemento = x;
			}else
			{
				int ant = anterior(direccion);
				m.poner_dato(ant,2,x);
                m.poner_dato(x,2,direccion);
            }

        }
	}else
	{
		throw("Existe  Espacio de Memoria...");
    }
}

void TDAListaMemoria::modifica(int direccion,int elemento)
{
	if(vacia())
	{
        throw("Lista esta Vacia...");
	}else
	{
        m.poner_dato(direccion,1,elemento);
    }

}


void TDAListaMemoria::imprimir()
{
	if(vacia())
	{
		throw("Lista Vacia...");
	}else
	{
		int p = primero();
		std::cout<<"<";

		while(p!=fin())
		{
			int e = recupera(p);
			std::cout<<e<< ((p!=NULO)?", ":"") ;
			p = siguiente(p);
		}
        std::cout<<recupera(fin());

		std::cout<<">"<<std::endl;

	}
}


void TDAListaMemoria::suprime(int direccion)
{
	if(Longitud==0)
	{
        throw("Lista Vacia...");
	}
	if(direccion==PtrElemento)
	{
		int x = PtrElemento;
		PtrElemento = m.obtener_dato(PtrElemento,2);
		m.poner_dato(direccion,PtrElemento,NULO);
	}else
	{
		int ant = anterior(direccion);
		m.poner_dato(ant,2,siguiente(direccion));
        m.poner_dato(direccion,ant,NULO);
    }
}
