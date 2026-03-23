#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    
    int n;

    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    int numeros[n];
    int i, pos, aux;

    
    for(i=0;i<n;i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }

    
    for(i=0;i<n;i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }

        numeros[pos] = aux;
    }

    
    cout<<"\nOrden Ascendente: ";
    for(i=0;i<n;i++){
        cout<<numeros[i]<<" ";
    }

    
    cout<<"\nOrden Descendente: ";
    for(i=n-1;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    getch();
    return 0;
}
