// a. Utiliza la función abs() para calcular el valor absoluto de un número entero. Prueba con varios números, incluyendo negativos.
// b. Usa la función rand() para generar un número aleatorio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    int numero = 33;

    int abs_numero = abs(numero);

    cout << "El valor absoluto de " << numero << " es " << abs_numero << endl;

    return 0;
}