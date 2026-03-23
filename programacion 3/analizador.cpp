#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char cadena[100];
    int i = 0;

    cout << "Ingrese una linea de codigo: ";
    cin.getline(cadena, 100);

    while (cadena[i] != '\0') {

        // Ignorar espacios
        if (isspace(cadena[i])) {
            i++;
            continue;
        }

        // Identificadores o palabras clave
        if (isalpha(cadena[i])) {
            string palabra = "";

            while (isalnum(cadena[i])) {
                palabra += cadena[i];
                i++;
            }

            if (palabra == "int" || palabra == "float")
                cout << palabra << " -> Palabra clave\n";
            else
                cout << palabra << " -> Identificador\n";
        }

        // Números
        else if (isdigit(cadena[i])) {
            string numero = "";

            while (isdigit(cadena[i])) {
                numero += cadena[i];
                i++;
            }

            cout << numero << " -> Numero\n";
        }

        // Operadores
        else {
            cout << cadena[i] << " -> Operador\n";
            i++;
        }
    }

    return 0;
}
