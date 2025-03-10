#include "SMemoria.h"
#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>


// Constructor de la Clase "Simulacion Memoria"
SMemoria::SMemoria()
{
	for(int i=1;i<=MAX;++i)
	{
		mem[i].Dato = NULO;
        mem[i].Link = i+1;
	}
	mem[MAX].Link = NULO;
    Libre = 1;


}

int SMemoria::new_espacio(int cantidad)
{
	int x = Libre;
	for(int i=1;i<=cantidad-1;++i)
	{
        x = mem[x].Link;
	}
    int z = Libre;
	Libre = mem[x].Link;
	mem[x].Link = NULO;
    return x;

}

void SMemoria::delete_espacio(int dir)
{
	int x = dir;
	while(mem[x].Link!=NULO)
	{
		x = mem[x].Link;
        // Comentar si es que no hay que liberar el dato en el espacio de Memeoria
		//mem[x].Dato = NULO;
	}
	mem[x].Link = Libre;
    Libre = dir;
}


void SMemoria::poner_dato(int dir,int lugar,int valor)
{
	int x = dir;
	for(int i=1;i<=lugar-1;++i)
	{
		x = mem[x].Link;
	}
	mem[x].Dato = valor;
}

int SMemoria::obtener_dato(int dir,int lugar)
{
    int x = dir;
	for(int i=1;i<=lugar-1;++i)
	{
		x = mem[x].Link;
	}
	return mem[x].Dato;
}

void espacios(int n)
{
	int top = 12;
	int digitos = log10(float(abs(n)))+1;

    if(n<=0)digitos++;

	for(int i=0;i<top-digitos;++i)std::cout<<" ";
}

void SMemoria::mostrar()
{

	std::cout<<"+--------------------------------------+"<<std::endl;
	std::cout<<"|    DIRE    |    DATO    |    LINK    |"<<std::endl;
	std::cout<<"+--------------------------------------+"<<std::endl;
	for(int i=1;i<=MAX;++i)
	{

		if(direccion_libre(i))
		{
			std::cout<<"|";
			espacios(i); std::cout<<i<<"|";
			espacios(mem[i].Dato); std::cout<<mem[i].Dato<<"|";
			espacios(mem[i].Link); std::cout<<mem[i].Link<<"|\n";
		}

	}
	std::cout<<"+--------------------------------------+"<<std::endl;
    std::cout<<"Libre: "<<Libre<<std::endl;
}

int SMemoria::espacio_disponible()
{
	int x = Libre;
	int c = 0;
	while(x!=NULO)
	{
		c++;
        x = mem[x].Link;
	}

    return c;
}

int SMemoria::espacio_ocupado()
{
    int c = (MAX+1)-espacio_disponible();
}

bool SMemoria::direccion_libre(int direccion)
{
	int x = Libre;
	bool c = false;
	while(x!=NULO && c==false)
	{
		if(x==direccion)
		{
            c = true;
		}
		x = mem[x].Link;
	}
    return c;
}
