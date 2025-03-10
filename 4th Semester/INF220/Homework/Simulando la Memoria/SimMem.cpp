/*////////////////////////////////////////////////////////////////////////////
	Tarea #2
	Docente: Mario Lopez Winnipeg
	U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones
	Leonardo Anez Vladimirovna
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

#include "SMemoria.h"

using namespace std;


void MostrarOpciones()
{
 	cout<<"SIMULACION DE LA MEMORIA:\n";
	cout<<"[1] Crear\n";
	cout<<"[2] Pedir Espacio\n";
	cout<<"[3] Liberar Espacio\n";
	cout<<"[4] Poner Dato\n";
	cout<<"[5] Obtener Dato\n";
	cout<<"[6] Mostrar Memoria\n";
	cout<<"[7] Salir\n";
    cout<<"Opcion: ";
}

int _tmain(int argc, _TCHAR* argv[])
{
	int opcion;
	int direccion,lugar,valor,cantidad,dato;

	SMemoria M;

	do
	{
		// Refresh de la Consola
		system("cls");

        // Menu de Opciones
		MostrarOpciones();

		// Opcion del Menu
		cin>>opcion;

		switch(opcion)
		{
            // Crear
			case 1:
                    M = SMemoria(); // Rellamada del Constructor
					break;
			// Pedir
			case 2:
					cout<<"Digite la Cantidad de Espacio:\n";
					cin>>cantidad;

					if(M.espacio_disponible()>=cantidad)
					{
						cout<<M.new_espacio(cantidad)<<endl;
					}else
					{
                        cout<<"No hay Suficiente Espacio\n";
                    }
					break;
			// Liberar
			case 3:
					cout<<"Digite el Espacio a Liberar:\n";
					cin>>direccion;
					M.delete_espacio(direccion);
					break;
            // Poner Dato
			case 4:
                    cout<<"Digite la Direccion, Lugar y Valor (Seguidos de un Espacio):\n";
					cin>>direccion>>lugar>>valor;
                    M.poner_dato(direccion,lugar,valor);
					break;
			// Obtener Dato
			case 5:
					cout<<"Digite la Direccion y Lugar (Seguidos de un Espacio):\n";
					cin>>direccion>>lugar;
					dato = M.obtener_dato(direccion,lugar);
					cout<<dato<<endl;

					break;
			 // Mostrar
			case 6:
					M.mostrar();
					break;
			// Salir
			default:
					break;
		}
		getch();

	}while(opcion!=7);


	return 0;
}
