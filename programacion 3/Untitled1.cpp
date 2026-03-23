#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // ==========================================
    // 1. ARREGLOS UNIDIMENSIONALES (VECTORES)
    // ==========================================
    
    // Declaración e inicialización estática
    int numeros[5] = {10, 20, 30, 40, 50};
    
    cout << "--- Arreglo Unidimensional ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Elemento en indice " << i << ": " << numeros[i] << endl;
    }

    // ==========================================
    // 2. MATRICES (ARREGLOS BIDIMENSIONALES)
    // ==========================================
    
    // Declaración de una matriz 3x3 (3 filas, 3 columnas)
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "\n--- Matriz 3x3 ---" << endl;
    for(int f = 0; f < 3; f++) { // Recorre filas
        for(int c = 0; c < 3; c++) { // Recorre columnas
            cout << matriz[f][c] << " ";
        }
        cout << endl; // Salto de línea al terminar cada fila


    return 0;
}
}
