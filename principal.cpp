#include "Cliente.cpp"
#include <iostream>
using namespace std;

main (){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar nit: ";
	cin>>nit;
	cout<<"ingresar nombres: ";
	cin>>nombres;
	cout<<"ingresar apellidos: ";
	cin>>apellidos;
	cout<<"ingresar direccion: ";
	cin>>direccion;
	cout<<"ingresar telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
}
