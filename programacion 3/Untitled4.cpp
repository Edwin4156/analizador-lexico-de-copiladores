#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    // ==========================================
    // 1. ARREGLO UNIDIMENSIONAL
    // ==========================================
    
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "--- Arreglo Unidimensional ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Elemento en indice " << i << ": " << numeros[i] << endl;
    }

    // ==========================================
    // 2. MATRIZ 3x3 INGRESADA POR EL USUARIO
    // ==========================================
    
    int matriz[3][3];

    cout << "\n--- Ingrese los valores de la matriz 3x3 ---" << endl;

    for(int f = 0; f < 3; f++) {
        for(int c = 0; c < 3; c++) {
            cout << "Ingrese valor en [" << f << "][" << c << "]: ";
            cin >> matriz[f][c];
        }
    }

    // Mostrar matriz completa
    cout << "\n--- Matriz 3x3 ingresada ---" << endl;
    for(int f = 0; f < 3; f++) {
        for(int c = 0; c < 3; c++) {
            cout << matriz[f][c] << "\t";
        }
        cout << endl;
    }

    // ==========================================
    // 3. MATRIZ INTERACTIVA 2x2 (EJEMPLO)
    // ==========================================
    
    int filas = 2, columnas = 2;
    int matrizInteractiva[2][2];
    int suma = 0;

    cout << "\n--- Llenado automatico de matriz 2x2 ---" << endl;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matrizInteractiva[i][j] = (i + 1) * (j + 5);
            suma += matrizInteractiva[i][j];
        }
    }

    cout << "\nMatriz 2x2 generada:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matrizInteractiva[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
