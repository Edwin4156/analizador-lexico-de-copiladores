#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[100];
    int n,i,j,aux,min;

    cout<<"Cuantos numeros desea ingresar: ";
    cin>>n;

   
    for(i=0;i<n;i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }

    
    for(i=0;i<n;i++){
        min = i;

        for(j=i+1;j<n;j++){
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }

        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
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
