#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre [30];
	int edad;
} 

persona1 = {"Giovanni", 20},
persona2 = {"Jorge", 15};



int main (){
	cout << "Nombre1: " << persona1.nombre;
	cout << " Edad: " << persona1.edad << endl;
	 
	cout << "Nombre2: " << persona2.nombre;
	cout << " Edad: " << persona2.edad << endl;
	
	
	
	getch ();
	return 0;
}
