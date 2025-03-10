//---------------------------------------------------------------------------

#ifndef SMemoriaH
#define SMemoriaH
//---------------------------------------------------------------------------

static const int NULO = -1;
static const int MAX  = 20;

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

	   int  	new_espacio(int cantidad);
	   void 	delete_espacio(int dir);
	   void 	poner_dato(int dir,int lugar,int valor);
	   int  	obtener_dato(int dir,int lugar);
	   void 	mostrar();
	   int 		espacio_disponible();
	   int 		espacio_ocupado();
       bool 	direccion_libre(int direccion);
};


#endif
