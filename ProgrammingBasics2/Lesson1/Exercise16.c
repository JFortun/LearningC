#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int datoEscritura[10], datoLectura[10];
    char nombre[100];

    for (int i = 0; i < 10; i++) {
        printf("\nEscribe un n%cmero:", 163);
        scanf("%d", &datoEscritura[i]);
    }
    printf("Introduce el nombre del fichero\n");
    scanf("%s", nombre);

    f1 = fopen(nombre, "wb");
    if (f1 == NULL) {
        printf("No se puede abrir el fichero");
        return -1;
    } else {
        fwrite(&datoEscritura, sizeof datoEscritura, 1, f1);
        printf("Fichero creado correctamente\n");
        fclose(f1);

        f2 = fopen(nombre, "rb");
        if (f2 == NULL) {
            printf("No se puede abrir el fichero");
            return -1;
        } else {
            fread(&datoLectura, sizeof datoLectura, 1, f2);
            for (int i = 0; i < 10; i++) {
                printf("%d ", datoLectura[i]);
            }

            fclose(f2);

        }
    }

    return 0;
}