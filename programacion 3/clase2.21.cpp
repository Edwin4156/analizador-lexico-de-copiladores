#include<iostream>
using namespace std;

int main(){
    int matriz1[3][3], matriz2[3][3], suma[3][3];

    cout<<"Ingrese los datos de la primera matriz:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }

    cout<<"\nIngrese los datos de la segunda matriz:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j];
        }
    }

    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout<<"\nLa matriz suma es:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<suma[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
