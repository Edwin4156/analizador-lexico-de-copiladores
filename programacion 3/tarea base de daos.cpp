#include <iostream>
#include <conio.h>

using namespace std;

struct infodireccion{
	char direccion[30];
	char municipio[30];
	char departamento[30];
}; 


struct empleado{
	char nombre [30];
	struct infodireccion dirempleado;
	double salario;
} empleados [2];



int main (){
	
	for (int i=0; i<2;i++){
	fflush(stdin);	
	cout << "Escriba su Nombre: ";
	cin.getline(empleados[i].nombre,30, '\n');
	cout << "Escriba su direccion: ";
	cin.getline(empleados[i].dirempleado.direccion,30, '\n');
	cout << "Escriba su Municipio: ";
	cin.getline(empleados[i].dirempleado.municipio,30, '\n');
	cout << "Escriba su Departamento: ";
	cin.getline(empleados[i].dirempleado.departamento,30, '\n');
	cout << "Escriba su Salario: ";
	cin>> empleados[i].salario;
	cout << '\n';
	
	}
	
	//imprimendo datos
	
	for (int i=0;i<2;i++){
		cout << "Nombre: " << empleados[i].nombre<<endl;
		cout << "Dirección: "<< empleados[i].dirempleado.direccion<<endl;
	    cout << "Municipio: "<<empleados[i].dirempleado.municipio<<endl;
	    cout << "Departamento: "<<empleados[i].dirempleado.departamento<<endl;
	    cout << "Salario: "<<empleados[i].salario;
	    cout << endl;
	}   
	
	
	
	
	getch ();
	return 0;
}
}
