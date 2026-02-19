#include <iostream>
 //Clase persona 
using namespace std;

class Persona{
	//Atributos
	protected : string nombres,apellidos,direccion;
				int telefono;
				public:
		//Constructor
		
	protected : Persona(){
		}
		Persona(string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			
		}
		//Metodos (CRUD)
		void mostrar();
		void leer();
		void actualizar();
		void borrar();
		void crear();
};	
