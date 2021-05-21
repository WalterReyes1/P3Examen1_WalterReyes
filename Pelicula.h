#ifndef PELICULA_H
#define PELICULA_H

class Pelicula {
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;

	public:
		Pelicula();
		Pelicula(string titulo; string director,string genero int valoracion);
		
		string getTitulo();
		void setTitulo(string);
		
		string getDirector():
		void setDirector(string);
		
		string getGenero();
		void setGenero();
		
		int getValoriacion();
};

#endif