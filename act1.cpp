#include <iostream>
using namespace std;
int main(){
	int costo,precio;
	string referencia,descripcion;
	
	cout<<"digite la referencia del zapato: ";
	cin>>referencia;
	cout<<"digite la descripcion del zapato: ";
	cin>>descripcion;
	cout<<"digite el costo del zapato: ";
	cin>>costo;
	cout<<"digite el precio del zapato: ";
	cin>>precio;
	system("cls");
	
	cout<<"Referencia : "+ referencia<<endl;
	cout<<"Descripcion : "+ descripcion<<endl;
	cout<<"Costo:  " + std::to_string(costo)<<endl;
	cout<<"Precio:  "+std::to_string(precio)<<endl;
	cout<<"Camilo Munoz"<<endl;
	system("pause");
}