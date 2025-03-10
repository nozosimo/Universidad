/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen:
            Implementaciones de todas los temas de la Materia:
            --------------------------------------------------
            Listas:
                   Puntero
                   Vector
                   Simulacion Memoria
            Pila:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
            Conjunto:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
                   Entero
            Polinomio:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
            Matriz Dispersa:
                   Vector
                   Puntero
                   Puntero Doble Enlace
                   Comprimido
            Colas:
                   Puntero
                   Lista
                   Vector
                   Vector Desplazado
                   Vector Circular
                   Dicola
                   Cola de Prioridad usando Vector

*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

#include "TDAMatrizDispersaPunteroDobleMemoria.h"

                            #include "TDAPolinomioVector.h"
using namespace std;

void MostrarOpciones()
{
 	cout<<"Matriz Dispersa:\n";
	cout<<"[1] Crear\n";
    cout<<"[2] Dimensionar\n";
	cout<<"[3] Valor por Defecto\n";
	cout<<"[4] Poner\n";
	cout<<"[5] Mostrar Memoria\n";
    cout<<"[6] Mostrar Matriz\n";
    cout<<"[7] Salir\n";
    cout<<"Opcion: ";
}

int main()
{
    int opcion,f,c,e;
    TDAMatrizDispersaPunteroDobleMemoria MDP;
    TDAPolinomioVector Poli;
    Poli.crear();
    Poli.poner_termino(2,4);
    for(float i=-2;i<=2;i+=0.25)
    {
        cout<<i<<" "<<Poli.evaluar(i)<<endl;
    }
               /*
    do{
		system("cls");
		MostrarOpciones();
		cin>>opcion;
        switch(opcion)
        {
            case 1:  MDP.crear(); break;
            case 2:
                     cout<<"Dimensiones de la Matriz (Fila,Columna): ";
                     cin>>f>>c;
                     MDP.dimensionar(f,c);
                     break;
            case 3:
                     cin>>f;
                     MDP.definir_valor_repetido(f);
                     break;
            case 4:
                     cout<<"Ingrese fila: ";
                     cin>>f;
                     cout<<"Ingrese columna: ";
                     cin>>c;
                     cout<<"Ingrese elemento: ";
                     cin>>e;
                     MDP.poner(f,c,e);
                     getch();
                     break;
            case 5:  MDP.mostrarMemoria();
                     getch();
                     break;
            case 6:
                     MDP.mostrar();
                     getch();
                     break;

        }
    }while(opcion!=7);


    /*
    MDP.crear();
    MDP.dimensionar(4,4);


    int x;

    for(int i=1;i<=MDP.dimension_fila();++i)
    {
        for(int j=1;j<=MDP.dimension_columna();++j)
        {
            cin>>x;
            MDP.poner(i,j,x);
        }
    }


    MDP.mostrar();
      */


	getch();
	return 0;
}

