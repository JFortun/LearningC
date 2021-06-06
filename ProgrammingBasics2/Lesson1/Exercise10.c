#include <stdio.h>
#include <string.h>

int contarCoincidencias(FILE *fptr, const char *word);

int main() {
    FILE *file;
    char nombre[100];
    char palabra[50];
    int veces;

    printf("Introduce el nombre del archivo:");
    scanf("%s", nombre);

    printf("Introduce la palabra a buscar:");
    scanf("%s", palabra);

    file = fopen(nombre, "r");

    veces = contarCoincidencias(file, palabra);

    printf("'%s' se ha encontrado %d veces", palabra, veces);

    fclose(file);

    return 0;
}

int contarCoincidencias(FILE *fptr, const char *word) {
    char cadena[1000];
    char *posicion;

    int aux, contador;

    contador = 0;

    while ((fgets(cadena, 1000, fptr)) != NULL) {
        aux = 0;

        while ((posicion = strstr(cadena + aux, word)) != NULL) {
            aux = (posicion - cadena) + 1;

            contador++;
        }
    }

    return contador;
}