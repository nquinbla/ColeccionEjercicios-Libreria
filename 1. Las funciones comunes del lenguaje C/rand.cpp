// b. Usa la función rand() para generar un número aleatorio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.

#include <iostream> // para usar cout
#include <stdlib.h> // para usar la funcion abs
#include <time.h> // para usar la funcion time

using namespace std;

int main() {
    srand(time(0)); // cambia la semilla de la generacion de numeros aleatorios

    int numero_random = rand();
    cout << "El numero aleatorio es " << numero_random << endl;

    return 0;
}