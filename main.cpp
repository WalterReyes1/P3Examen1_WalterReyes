#include <iostream>

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
		cout<<"7.Salir"<<endl;
		cout<<"Eliga una opcion: ";
		cin>>opcion;
		if(opcion >0 && opcion <8) {
			return opcion;
		}

	}

}
int main(int argc, char** argv) {
	while(opcion != 7){
		switch(opcion == menu()){
			case 1: {
				
				break;
			}//fin case 1
			case 2:{
				
				break;
			}//fin case 2
			case 3:{
				
				break;
			}//fin case 3
			case 4: {
				
				break;
			}//fin case 4
			case 5:{
				
				break;
			}//fin case 5
			case 6: {
				
				break;
			}//fin case 6
			case 7 :{
			
				break;
			}//fin case 7
		}// fin switch
	}// fin while
	return 0;
}