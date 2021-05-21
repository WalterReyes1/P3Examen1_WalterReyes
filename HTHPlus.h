#ifndef HTHPLUS_H
#define HTHPLUS_H
#include "Pelicula.h"
#include <vector>
#include <string>
using namespace std;
class HTHPlus {
	private :
	vector<Pelicula*>listaPeliculas;
	public:
		HTHPlus();
		~HTHPlus();
		void imprimirPorGenero();
		void buscarPelicula(string);
		void imprimirPorValoracion();
	
		vector<Pelicula*> getListaPeliculas();
		void addPelicula(Pelicula*);
		void EditarPelicula(int,int);
		void EliminarPelicula(int);
		string toString();
};

#endif