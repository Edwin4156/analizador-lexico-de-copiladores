#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre [30];
	int edad;
} persona1, persona2;



int main (){
	cout << "Escriba su Nombre: ";
	cin.getline(persona1.nombre,20, '\n');
	cout << "Escriba su Edad: ";
	cin>>persona1.edad;
	
	cout << "\nImprimiendo datos \n";
	cout << "Nombre: "<< persona1.nombre;
	cout << "  Edad: " << persona1.edad << endl;
	
		cout << "Escriba su Nombre: ";
	cin.getline(persona2.nombre,20, '\n');
	cout << "Escriba su Edad: ";
	cin>>persona2.edad;
	
	cout << "\nImprimiendo datos \n";
	cout << "Nombre: "<< persona2.nombre;
	cout << "  Edad: " << persona2.edad << endl;
	
	getch ();
	return 0;
}
