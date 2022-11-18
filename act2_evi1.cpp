#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int opcion;
	cout<<"por favor elija la figura a la que desea hallar el area:"<<endl;
	cout<<endl;
	cout<<"1. Rectangulo"<<endl;
	cout<<"2. Triangulo"<<endl;
	cout<<"3. Rombo"<<endl;
	cout<<"4. Paralelogramo"<<endl;
	cout<<"5. Trapecio"<<endl;
	cout<<"6. Circulo"<<endl;
	cin>>opcion;
	system("cls");
	
	switch(opcion){
			int altura,base,diagonalMayor,diagonalMenor;
			int baseMenor,baseMayor,radio;
		
		case 1:
			cout<<"elegiste Rectangulo"<<endl;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"ingrese la base"<<endl;
			cin>>base;
			cout<<"el resultado es:  "<<altura*base <<endl;
		break;
		case 2:
			cout<<"elegiste Triangulo"<<endl;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"ingrese la base"<<endl;
			cin>>base;
			cout<<"el resultado es:  "<<(altura*base)/2 <<endl;
		break;
			case 3:
			cout<<"elegiste Rombo"<<endl;
			cout<<"ingrese Diagonal mayor"<<endl;
			cin>>diagonalMayor;
			cout<<"ingrese la diagonal menor"<<endl;
			cin>>diagonalMenor;
			cout<<"el resultado es:  "<<(diagonalMayor*diagonalMenor)/2 <<endl;
		break;
			case 4:
			cout<<"elegiste Paralelogramo"<<endl;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"ingrese la base"<<endl;
			cin>>base;
			cout<<"el resultado es:  "<<altura*base <<endl;
		break;
		case 5:
			cout<<"elegiste Trapecio"<<endl;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"ingrese la base mayor"<<endl;
			cin>>baseMayor;
			cout<<"ingrese la base menor"<<endl;
			cin>>baseMenor;
			cout<<"el resultado es:  "<<((baseMenor*baseMayor)/2)*altura <<endl;
		break;
		case 6:
			cout<<"elegiste Circulo"<<endl;
			cout<<"ingrese el radio"<<endl;
			cin>>radio;
			cout<<"el resultado es:  "<<radio*radio*M_PI <<endl;
		break;
		
		default:
			cout<<"opcion no valida,ejecute de nuevo el programa"<<endl;
		
	}
	cout<<"Camilo Munoz"<<endl;
}