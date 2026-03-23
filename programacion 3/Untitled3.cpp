#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
// ==========================================
// 1. ARREGLOS UNIDIMENSIONALES (VECTORES)
// ==========================================
// Declaraci n e inicializaci n est tica? ? ?
int numeros[5] = {10, 20, 30, 40, 50};
cout << "--- Arreglo Unidimensional ---" << endl;
for(int i = 0; i < 5; i++) {
cout << "Elemento en indice " << i << ": " << numeros[i] << endl;
}
// ==========================================
// 2. MATRICES (ARREGLOS BIDIMENSIONALES)
// ==========================================
// Ejemplo A: Matriz con valores predefinidos
int matriz[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
cout << "\n--- Matriz 3x3 Predefinida ---" << endl;
for(int f = 0; f < 3; f++) {
for(int c = 0; c < 3; c++) {
cout << matriz[f][c] << " ";
}
cout << endl;
}
// Ejemplo B: Matriz interactiva (llenado por usuario)
int filas = 2, columnas = 2;
int matrizInteractiva[2][2];
int suma = 0;
cout << "\n--- Llenado de Matriz Interactiva (2x2) ---" << endl;
for(int i = 0; i < filas; i++) {
for(int j = 0; j < columnas; j++) {
// En un entorno real, aqu se usar a cin >> matrizInteractiva[i][j];? ?
// Para este ejemplo, asignaremos valores autom ticos?
matrizInteractiva[i][j] = (i + 1) * (j + 5);
cout << "Valor asignado a [" << i << "][" << j << "]: " <<
matrizInteractiva[i][j] << endl;
suma += matrizInteractiva[i][j];
}
}
cout << "La suma de los elementos de la matriz interactiva es: " << suma <<
endl;
// ==========================================
// 3. USO DE STD::VECTOR (ARREGLOS DIN MICOS)?
// ==========================================
return 0;
}
