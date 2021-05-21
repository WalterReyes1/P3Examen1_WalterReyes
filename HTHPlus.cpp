#include "HTHPlus.h"
#include <iostream>
#include<vector>
using namespace std;
HTHPlus::HTHPlus() {

}

void HTHPlus::addPelicula(Pelicula* peli) {
	this->listaPeliculas.push_back(peli);
}
void HTHPlus::EliminarPelicula(int pos) {
	delete this->listaPeliculas[pos];
	listaPeliculas.erase(listaPeliculas.begin()+pos);
}

vector<Pelicula*> HTHPlus::getListaPeliculas() {
	return listaPeliculas;
}
void HTHPlus::EditarPelicula(int pos,int menu) {
	Pelicula *p = this->listaPeliculas[pos];
	string titulo;
	string director;
	string genero;
	if(menu==1) {
		cout<<"Ingrese nuevo Titulo: ";
		cin>>titulo;
		p->setTitulo(titulo);
	}
	if(menu==2) {
		cout<<"Ingrese nuevo Director: ";
		cin>>director;
		p->setDirector(director);
	}
	if(menu==3) {
		cout<<"Ingrese nuevo Genero: ";
		cin>>genero;
		p->setGenero(genero);
	}
	if(menu==4) {
		srand(time(NULL));
		int x= 1+rand()% 5;
		p->setValoracion(x);
	}
}

string HTHPlus::toString() {
	string s;
	for(int i=0; i<this->listaPeliculas.size(); i++) {
		Pelicula* p = this->listaPeliculas[i];
		s+= p->toString();
	}
	return s;
}

void HTHPlus::imprimirPorGenero() {
	vector<string>categoriaTemp;
	int cont = 0;
	for(int i =0; i<this->listaPeliculas.size(); i++) {
		Pelicula* p = this->listaPeliculas[i];
		string s = p->getGenero();

		bool yaEsta = false;
		for(int j = 0; j<this->listaPeliculas.size(); j++) {
			Pelicula* p2 = this->listaPeliculas[j];
			string f = p2->getGenero();
			if((strstr(f.c_str(),s.c_str()))) {
				yaEsta = true;
				j=this->listaPeliculas.size();
			}
		}
		if(yaEsta) {
			categoriaTemp.push_back(s);
		}
	}
	for(int i =0; i<categoriaTemp.size();i++){
		cout<<endl;
		if(cont<categoriaTemp.size()){	
		cout<<categoriaTemp[i]<<" : "<<endl;
		}
		for(int j =0; j<this->listaPeliculas.size();j++){
			Pelicula* p3 = this->listaPeliculas[j];
			if((strstr(categoriaTemp[i].c_str(),p3->getGenero().c_str()))&&cont <categoriaTemp.size()){
				cout<<p3->getTitulo()<<", "<<p3->getDirector()<<", "<<p3->getValoracion()<<endl;
				cont++;
			}
		}
	}
	cont =0;
	
}
void HTHPlus::buscarPelicula(string busqueda){
	
	for(int i = 0; i<this->listaPeliculas.size();i++){
	Pelicula *p =this->listaPeliculas[i];
	string f =p->getTitulo();
		if((strstr(f.c_str(),busqueda.c_str()))){
			cout<<p->toString()<<endl;
		}
	}
}
void HTHPlus::imprimirPorValoracion(){
	int pos;
	vector<Pelicula*>temp;
	vector<Pelicula*>cambios;
	for(int i = 0; i<this->getListaPeliculas().size();i++){
		Pelicula* p = this->getListaPeliculas().at(i);
		temp.push_back(p);
		
	}
	for(int i = 0; i<temp.size();i++){
		int min = 0;
		int max =6;
		Pelicula* p =temp[i];
		if(max>min){
			max= p->getValoracion();
			
		}
	}
	for(int i =0; i<cambios.size();i++){
		Pelicula* p = cambios[i];
		cout<<p->toString()<<endl;
	}
}
HTHPlus::~HTHPlus() {

}