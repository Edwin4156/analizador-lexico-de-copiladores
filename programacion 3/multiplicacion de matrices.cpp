#include <iostream>
using namespace std;

int main() {
    int f1, c1, f2, c2;

   
    cout << "Filas de la primera matriz: ";
    cin >> f1;
    cout << "Columnas de la primera matriz: ";
    cin >> c1;

    cout << "Filas de la segunda matriz: ";
    cin >> f2;
    cout << "Columnas de la segunda matriz: ";
    cin >> c2;

    
    if (c1 != f2) {
        cout << "\nNo se puede multiplicar las matrices." << endl;
        cout << "Las columnas de la primera matriz deben ser iguales "
             << "a las filas de la segunda." << endl;
        return 0;
    }

    
    int A[10][10], B[10][10], C[10][10];

    
    cout << "\nIngrese los elementos de la primera matriz:\n";
    for(int i = 0; i < f1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "\nIngrese los elementos de la segunda matriz:\n";
    for(int i = 0; i < f2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    
    for(int i = 0; i < f1; i++) {
        for(int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for(int i = 0; i < f1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "\nMatriz resultado (A x B):\n";
    for(int i = 0; i < f1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
