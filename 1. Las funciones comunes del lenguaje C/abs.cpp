// a. Utiliza la función abs() para calcular el valor absoluto de un número entero. Prueba con varios números, incluyendo negativos.

#include <iostream> // para usar cout
#include <stdlib.h> // para usar la funcion abs
#include <stdio.h> // no necesitaria esta bibnioteca si usara cout en lugar de printf

using namespace std;

int main() {
    int numero = 33;

    int abs_numero = abs(numero);

    cout << "El valor absoluto de " << numero << " es " << abs_numero << endl;

    return 0;
}