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
    // 2. MATRIZ 3x3 COMPLETA
    // ==========================================
    
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "\n--- Matriz 3x3 completa ---" << endl;

    for(int f = 0; f < 3; f++) {
        for(int c = 0; c < 3; c++) {
            cout << matriz[f][c] << "\t"; // tabulación para que se vea ordenada
        }
        cout << endl;
    }

    return 0;
}
