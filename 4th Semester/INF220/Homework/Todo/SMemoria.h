/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Simulacion de la Memoria
*/////////////////////////////////////////////////////////////////////////////

#ifndef SMemoriaH
#define SMemoriaH
#endif


static const int NULO = -1;
static const int MAX  = 40;

// Estructura Nodo, con Dato y Link (Siguiente direccion a la que apunta el elemento)
struct NodoM
{
	int Dato;
	int Link;
};

class SMemoria
{
	public:

	   int Libre;
	   NodoM mem[MAX+1];

	   // Constructor
	   SMemoria();

       // Funcion que devuelve la "direccion" del espacio libre solicitado
	   int new_espacio(int cantidad);

	   // Metodo que libera "espacio" de memora
	   void delete_espacio(int dir);

       // Metodo que coloca un dato en una posicion, a partir de una "direccion" en "memoria"
	   void poner_dato(int dir,int lugar,int valor);

       // Funcion para obtener un dato basado en la "direccion" y a partir de este, un lugar
	   int obtener_dato(int dir,int lugar);

	   // Metodo para mostrar el estado de 'mem'
	   void mostrar();

	   // Funcion que devuelve el espacio libre
	   int espacio_disponible();

	   // Funcion que devuelve el espacio ocupado
	   int espacio_ocupado();

       // Funcion que pregunta por una direccion, y si esta esta libre u ocupada
	   bool direccion_libre(int direccion);
};

