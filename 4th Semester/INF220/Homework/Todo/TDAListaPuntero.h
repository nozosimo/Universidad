/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Lista' usando Punteros
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAListaPunteroH
#define TDAListaPunteroH
#endif

 struct NodoP
  {
	int Dato;
    NodoP *Sig;
  };


class TDAListaPuntero
{

	private:
		int Longitud;
		NodoP *PtrElementos;

	public:


        // Constructor
		void crear();


		bool vacia();

		NodoP *primero();
		NodoP *anterior(NodoP *direccion);
        NodoP *siguiente(NodoP *direccion);
        NodoP *fin();

		int recupera(NodoP *direccion);
		int longitud();

		void insertar(NodoP *posicion,int elemento);
		void modifica(NodoP *direccion, int elemento);
        void suprime(NodoP *direccion);

        // Metodos Propios
        void mostrar();



};

