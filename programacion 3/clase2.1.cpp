#include<iostream>
using namespace std;

int main(){
    int numeros[100], n;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }

    cout<<"\nNumeros del indice mayor al menor:\n";

    // Recorrido inverso
    for(int i=n-1;i>=0;i--){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    return 0;
}
