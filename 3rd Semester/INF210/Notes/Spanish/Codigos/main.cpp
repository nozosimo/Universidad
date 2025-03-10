/*////////////////////////////////////////////////////////////////////////////
	Tarea #3
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
//#include "TDAListaVector.h"
#include "TDAListaMemoria.h"
//#include "TDAListaPuntero.h"


using namespace std;


void MostrarOpciones()
{
	cout<<"*********************************\n";
	cout<<" Lista con Simulacion de Memoria \n";
	cout<<"*********************************\n";
	cout<<"Menu Proyecto 1:\n";
	cout<<"\n";
	cout<<"[1] Crear Memoria\n";
	cout<<"[2] Pedir Espacio\n";
	cout<<"[3] Liberar Espacio\n";
	cout<<"[4] Crear Lista\n";
	cout<<"[5] Poner en Direccion Inicial\n";
	cout<<"[6] Poner en Direccion Fin\n";
	cout<<"[7] Mostrar Memoria\n";
	cout<<"[8] Mostrar Lista\n";
	cout<<"[9] Salir\n";
	cout<<"Opcion: ";
}

int main()
{

    // Declaracion de la Lista (Basada en SMemoria)
	TDAListaMemoria LM;

	int opcion,elemento,cantidad,direccion;

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
			case 1:
				// Constructor de la Memoria...
				LM.m = SMemoria();
				break;
			case 2:
				// Pedir espacio en Memoria...
				cout<<"Digite la Cantidad de Memoria: ";

				cin>>cantidad;

				LM.m.new_espacio(cantidad);
				break;
			case 3:
                // Liberar espacio en Memoria...
                cout<<"Digite la Direccion de Memoria: ";

				cin>>direccion;

				LM.m.delete_espacio(direccion);
				break;
			case 4:
                // Creacion de la Lista...
                LM.crear();
				break;
			case 5:
				// Agregacion de elemento en la cabeza de la lista
				cout<<"Ingrese el Elemento a Insertar: ";

				cin>> elemento;

				if(LM.vacia())    // Pequena Excepcion
				{
					LM.inserta(1,elemento);
				}else
				{
                    LM.inserta(LM.primero(),elemento);
				}
				break;
			case 6:
				// Agregacion de elemento en la cola de la lista
				cout<<"Ingrese el Elemento a Insertar: ";

				cin>>elemento;
                if(LM.vacia())
				 {
					 LM.inserta(1,elemento);
				 }else
				 {
					LM.inserta(LM.fin(),elemento);
				 }
				break;
			case 7:
                // Mostramos la Memoria
				LM.m.mostrar();
				getch();
				break;
			case 8:
                 // Mostramos la Lista
				 if(LM.vacia())
				 {
					 cout<< "Lista Vacia"<<endl;
				 }else
				 {
                     LM.imprimir();
                 }
				 getch();
				 break;
			default :
				break;
		}

	}while(opcion!=9);

    cout<< "Gracias por usar el programa..." <<endl;

	getch();
	return 0;
}

