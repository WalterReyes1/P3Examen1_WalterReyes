#include <iostream>
#include "Pelicula.h"
#include "HTHPlus.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int opcion = 0;
int menu() {
	while(true) {
		cout<<"Bienvenido "<<endl;
		cout<<"___________________"<<endl;
		cout<<"1.Agregar Pelicula "<<endl;
		cout<<"2.Modificar Pelicula"<<endl;
		cout<<"3.Eliminar pelicula"<<endl;
		cout<<"4.Imprimir peliculas por genero"<<endl;
		cout<<"5.Buscar peliculas"<<endl;
		cout<<"6.Imprimir Peliculas ordenadas por valoracion"<<endl;
		cout<<"7.Listar Peliculas"<<endl;
		cout<<"8.Salir"<<endl;
		cout<<"Eliga una opcion: ";
		cin>>opcion;
		if(opcion >0 && opcion <9) {
			return opcion;
		}

	}

}
int main(int argc, char** argv) {
	HTHPlus* h = new HTHPlus();
	while(opcion != 8) {
		switch(opcion = menu()) {
			case 1: {
				
				string pelicula;
				string director;
				string genero;
				cout<<"Ingrese Nombre de pelicula: ";
				cin>>pelicula;
				cout<<"Ingrese Nombre del director: ";
				cin>>director;
				cout<<"Ingrese genero: ";
				cin>>genero;
				h->addPelicula(new Pelicula(pelicula,director,genero));
				break;
			}//fin case 1
			case 2: {
				int opcion2 =0;
				int opcion1 =0;
				string s = h->toString();
				cout<<s<<endl;
				do{
					cout<<"Ingrese valor Pelicula a editar: ";
					cin>>opcion1;
					
				}while(opcion1<0 || opcion1>h->getListaPeliculas().size());

				do {
					cout<<"Que desea editar? "<<endl;
					cout<<"1. Titulo"<<endl;
					cout<<"2. Director"<<endl;
					cout<<"3. Genero"<<endl;
					cout<<"4. Valoracion"<<endl;
					cin>>opcion2;
				}while(opcion2<0 || opcion2>4);
				h->EditarPelicula(opcion1,opcion2);
				break;
			}
			case 3: {
				int opcion = 0;
				for(int i = 0; i<h->getListaPeliculas().size(); i++) {
					Pelicula* p =h->getListaPeliculas().at(i);
					cout<<i<<". "<<p->getTitulo()<<endl;
				}
				do {
					cout<<"Cual pelicula desesa eliminar?: "<<endl;
					cin>>opcion;
				} while(opcion < 0 || opcion>h->getListaPeliculas().size());

				break;
			}//fin case 3
			case 4: {
				h->imprimirPorGenero();
				break;
			}//fin case 4
			case 5: {
				string cadena;
				cout<<"Ingrese nombre de pelicula: ";
				cin>>cadena; 
				h->buscarPelicula(cadena);
				break;
			}//fin case 5
			case 6: {

				break;
			}//fin case 6
			case 7 : {

				break;
			}//fin case 7
			case 8: {
				
				break;
			}// fin case 8;
			
		}// fin switch
	}// fin while
	return 0;
}