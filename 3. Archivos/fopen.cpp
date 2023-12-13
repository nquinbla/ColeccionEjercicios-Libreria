// a. Usa la función fopen() para abrir un archivo de texto. Si el archivo no existe, muestra un mensaje de error.

#include <iostream> // para usar cout.
#include <stdio.h> // para usar fopen

using namespace std;

int main() {
    FILE *archivo = fopen("archivo.txt", "r");

    if (archivo == NULL) {
        cout << "Error al abrir el archivo" << endl;
    }

    fclose(archivo);

    return 0;
}