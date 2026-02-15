#include "persona.cpp"	
#include <iostream>
using namespace std; 
class Cliente : Persona{
	// Atributos
	private :
		string nit;
	// Constructor 
	Cliente (){
		
	}
	Cliente (string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, tel, fn){
		nit = n;			
	}
	void leer(){
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Teleofono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
	}
	
};
