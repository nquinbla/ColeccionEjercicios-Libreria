// a. Crea dos cadenas de caracteres y usa la función strcmp() para compararlas. Prueba con cadenas iguales y diferentes.

#include <iostream> // para usar cout
#include <string.h> // para usar la funcion strcmp
#include <stdio.h> // no necesitaria esta bibnioteca si usara cout en lugar de printf

using namespace std;

int main() {
    char cadena1[] = "La tarta de queso";
    cout << "La cadena 1 es: " << cadena1 << endl; // "La tarta de queso"

    char cadena2[] = "Es la mejor";
    cout << "La cadena 2 es: " << cadena2 << endl; // "es la mejor"

    int resultado = strcmp(cadena1, cadena2);

    if (resultado == 0) {
        cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes" << endl;
    }

    return 0;
}