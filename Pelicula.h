#ifndef PELICULA_H
#define PELICULA_H
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
class Pelicula {
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;

	public:
		Pelicula();
		Pelicula(string titulo, string director,string genero);

		string getTitulo();
		void setTitulo(string);

		string getDirector();
		void setDirector(string);

		string getGenero();
		void setGenero(string);

		int getValoracion();
		void setValoracion(int);
		string toString();
};

#endif