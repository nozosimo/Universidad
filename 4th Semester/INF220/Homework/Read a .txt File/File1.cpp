/*////////////////////////////////////////////////////////////////////////////
	Tarea #1
	Docente: Mario Lopez Winnipeg

	U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones
	Leonardo Anez Vladimirovna
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <windows.h>
#include <sstream>
#include <iomanip>


using namespace std;

// Constante que define el nombre del archivo y su extension
const char filename_in[] = "entrada.txt";

double totalSuma = 0,cant=0;

// Funcion que Indica si un caracter es Numero
bool esNumero(char &c)
{
	return (c>='0' && c<='9');
}


void Promedio(string &s)
{
	int num;
	stringstream tmp;
	for(int i=0;i<s.size();++i)
	{
		if(!esNumero(s[i]))s[i]=' ';
	}
	tmp<<s;
	while(tmp>>num)
	{
		totalSuma += float(num);
		cant+=1;
	}

}


// Funcion que devuelve la cantidad de Numeros en una cadena
void conteoNumero(string &s)
{
	int num;
	stringstream tmp;
	for(int i=0;i<s.size();++i)
	{
		if(!esNumero(s[i]))s[i]=' ';
	}
	tmp<<s;
	while(tmp>>num)
	{
		totalSuma += float(num);
		cant+=1;
	}


	/*
	int total = 0;
	for(int i=0;i<s.size();++i)
	{

		  if(esNumero(s[i]))
		  {
			 int j = i;
			 while(esNumero(s[j]) && j<s.size() )
			 {
				 j++;
			 }
			i = j;
			total++;
		  }

	}   */
}

int _tmain(int argc, _TCHAR* argv[])
{

	int totalNumeros = 0;

	string temp;
	ifstream file;
	file.open ("entrada.txt");

	// Entrada del Archivo
	while (!file.eof())
	{
		getline (file, temp);
		Promedio(temp);
	}


	//cout<<"Total Numeros Detectados: "<<totalNumeros<<endl;

	if( int(cant)!=0 )
	{
		cout<<"Promedio: "<<totalSuma/cant<<endl;
	}else
	{
         cout<<"No existen numeros"<<endl;
	}


	// Abre la Pagina donde deberia estar Ubicado el .html
	//ShellExecute(NULL, "open", "http://dreamincode.net",
	 //			NULL, NULL, SW_SHOWNORMAL);

	// Esperar tecla para Finalizar
	getch();

	return 0;
}
