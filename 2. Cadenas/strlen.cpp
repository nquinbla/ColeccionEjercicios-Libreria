// b. Usa la función strlen() para calcular la longitud de una cadena.

#include <iostream> // para usar cout
#include <string.h> // para usar la funcion strlen
#include <stdio.h> // no necesitaria esta bibnioteca si usara cout en lugar de printf

using namespace std;

int main() {
    char str[] = "La tarta de queso es la mejor";
    cout << "La cadena es: " << str << endl;

    int longitud = strlen(str);

    cout << "La longitud de la cadena es: " << longitud << endl;

    return 0;
}
