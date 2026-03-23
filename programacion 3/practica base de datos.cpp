#include <iostream>
#include <conio.h>

using namespace std;

struct contacto {
	char nombres[30];
	char apellidos[30];
	char direccion[50];
	char empresa[30];
	char telefono[15];
};

int main () {
	
	int n;
	
	cout << "Ingrese la cantidad de registros: ";
	cin >> n;
	
	if(n < 100){
		cout << "Debe ingresar :" << endl;
		getch();
		return 0;
	}
	
	contacto agenda[200]; 
	
	cin.ignore(); 
	
	
	for (int i = 0; i < n; i++){
		
		cout << "\nRegistro #" << i+1 << endl;
		
		cout << "Nombres: ";
		cin.getline(agenda[i].nombres,30);
		
		cout << "Apellidos: ";
		cin.getline(agenda[i].apellidos,30);
		
		cout << "Direccion: ";
		cin.getline(agenda[i].direccion,50);
		
		cout << "Empresa: ";
		cin.getline(agenda[i].empresa,30);
		
		cout << "Telefono: ";
		cin.getline(agenda[i].telefono,15);
	}
	
	
	for (int i = 0; i < n; i++){
		cout << "\nRegistro #" << i+1 << endl;
		cout << "Nombre: " << agenda[i].nombres << " " << agenda[i].apellidos << endl;
		cout << "Direccion: " << agenda[i].direccion << endl;
		cout << "Empresa: " << agenda[i].empresa << endl;
		cout << "Telefono: " << agenda[i].telefono << endl;
	}
	
	getch();
	return 0;
}
