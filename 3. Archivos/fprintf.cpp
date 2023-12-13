// b. Escribe en un archivo de texto usando fprintf(). Después, lee lo que escribiste usando fscanf().

#include <iostream> // para usar cout.
#include <stdio.h> // para usar fopen

using namespace std;

int main() {
    FILE *archivo = fopen("archivo.txt", "w");

    if (archivo == NULL) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    fprintf(archivo, "El ligamento cruzado es el peor de los huesos\n");

    fclose(archivo);

    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    char texto[100];
    fscanf(archivo, "%s", texto);

    printf("Leido del archivo: %s\n", texto);

    fclose(archivo);

    return 0;

}

