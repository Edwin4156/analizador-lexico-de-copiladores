#include<iostream>
using namespace std;

int main(){
    int numeros[100], n, aux;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    
    if(n > 100 || n <= 0){
        cout<<"Cantidad invalida.";
        return 0;
    }


    for(int i=0; i<n; i++){
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }

    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(numeros[j] < numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    
    cout<<"\nNumeros ordenados de mayor a menor:\n";
    for(int i=0; i<n; i++){
        cout<<numeros[i]<<endl;
    }

    return 0;
}
