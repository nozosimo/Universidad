/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Pila' usando punteros
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAPilaPunteroH
#define TDAPilaPunteroH
#endif

 struct Nodo
  {
	char elemento;
    Nodo *sig;
  };

class TDAPilaPuntero
{
	  private:
		Nodo *Tope;
	  public:
        void crear();
        bool vacia();
		char cima();
		void meter(char elemento);
		void sacar(char
         &dato);
        void imprimir();

};
