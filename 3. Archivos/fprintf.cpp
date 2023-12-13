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

    fprintf(archivo, "El ligamento cruzado es el peor de los huesos");

    fclose(archivo);

    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    char buffer[50];
    // fscanf(archivo, "%s", buffer); // lee hasta el primer espacio, por lo que no es recomendable debido a la frase que he introducido

    fgets(buffer, 50, archivo); // este sin embargo, lee hasta el final de la linea

    printf("Leido del archivo: %s\n", buffer);

    fclose(archivo);

    return 0;

}

