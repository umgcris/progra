#include "Cliente.cpp"
#include <iostream>
using namespace std;

	main(){
		string nombres, apellidos, direccion, nit;
		int telefono;
		
		cout<<"Ingresar Nit: ";
		cin>>nit;
		cout<<"Ingresar Nombres: ";
		cin>>nombres;
		cout<<"Ingresar Apellidos: ";
		cin>>apellidos;
		cout<<"Ingresar Direccion: ";
		cin>>direccion;
		cout<<"Ingresar Telefono: ";
		cin>>telefono;
		// Instancia de un objeto
		Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
		obj.mostrar();
		cout<<"Datos de cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
		obj.mostrar()
		/*cout<<"Ingresar nit:";
		cin>>nit;
		obj.setNit(nit);
		obj.mostrar();*/
			
      }
