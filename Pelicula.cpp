#include "Pelicula.h"

Pelicula :: Pelicula() {

}
Pelicula::Pelicula(string _titulo, string _director,string _genero) {
	this->titulo=_titulo;
	this->director=_director;
	this->genero=_genero;
	srand (time(NULL));
	this->valoracion=1+rand()% 5;

}

string Pelicula::getTitulo() {
	return titulo;
}
void Pelicula::setTitulo(string _titulo) {
	this->titulo= _titulo;
}
string Pelicula::getDirector() {
	return director;
}
void Pelicula::setDirector(string _director) {
	this->director=_director;
}
string Pelicula::getGenero() {
	return genero;
}
void Pelicula::setGenero(string _genero) {
	this->genero=_genero;
}
int Pelicula::getValoracion(){
	return valoracion;
}
void Pelicula::setValoracion(int x){
	this->valoracion=x;
}

string Pelicula::toString() {
	string s ="Nombre de Pelicula: "+this->getTitulo()+" Director: "+this->getDirector()+" Genero:  "+this->getGenero()+" Puntuacion: "+to_string(this->valoracion)+"\n";
	return s;
}











