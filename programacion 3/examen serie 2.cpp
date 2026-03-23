#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    float A[n][2*n];

    cout << "Ingrese los valores de la matriz:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = n; j < 2*n; j++){
            if(i == j - n)
                A[i][j] = 1;
            else
                A[i][j] = 0;
        }
    }

    
    for(int i = 0; i < n; i++){
        float pivote = A[i][i];
        for(int j = 0; j < 2*n; j++){
            A[i][j] = A[i][j] / pivote;
        }

        for(int k = 0; k < n; k++){
            if(k != i){
                float factor = A[k][i];
                for(int j = 0; j < 2*n; j++){
                    A[k][j] = A[k][j] - factor * A[i][j];
                }
            }
        }
    }

    cout << "\nLa inversa de la matriz es:\n";
    for(int i = 0; i < n; i++){
        for(int j = n; j < 2*n; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
