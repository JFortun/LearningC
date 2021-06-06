#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char nombre[100], aux;

    printf("Introduce el nombre del fichero desde el que copiar\n");
    scanf("%s", nombre);

    // Open one file for reading
    file1 = fopen(nombre, "r");
    if (file1 == NULL) {
        printf("No se puede abrir el archivo %s \n", nombre);
        exit(0);
    }

    printf("Introduce el nombre del fichero al que copiar\n");
    scanf("%s", nombre);

    if (file2 = fopen(nombre, "r")) {
        fclose(file2);
        // file exists
        int opcion;

        printf("\nEl fichero ya existe:\n", 163);
        printf("1 - Machacar\n");
        printf("2 - Agregar al final\n");
        printf("Indica una opci%cn del men%c:\n", 162, 163);
        scanf("%d", &opcion);

        if (opcion == 1) {
            file2 = fopen(nombre, "w");
            if (file2 == NULL) {
                printf("No se puede abrir el archivo %s \n", nombre);
                exit(0);
            }

            // Read contents from file
            aux = fgetc(file1);
            while (aux != EOF) {
                fputc(aux, file2);
                aux = fgetc(file1);
            }
        } else {
            file2 = fopen(nombre, "a");
            if (file2 == NULL) {
                printf("No se puede abrir el archivo %s \n", nombre);
                exit(0);
            }

            // Read contents from file
            aux = fgetc(file1);
            while (aux != EOF) {
                fputc(aux, file2);
                aux = fgetc(file1);
            }
        }
    }
    file2 = fopen(nombre, "w");
    if (file2 == NULL) {
        printf("No se puede abrir el archivo %s \n", nombre);
        exit(0);
    }

    aux = fgetc(file1);
    while (aux != EOF) {
        fputc(aux, file2);
        aux = fgetc(file1);
    }

    printf("\nContenido copiado en %s", nombre);

    fclose(file1);
    fclose(file2);

    return 0;
}