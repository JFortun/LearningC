#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int datoEscritura, datoLectura;

    f1 = fopen("uno.bin", "wb");
    if (f1 == NULL) {
        printf("No se puede abrir el fichero");
        return -1;
    } else {
        printf("Escribe un n%cmero:\n", 163);
        scanf("%d", &datoEscritura);
        fwrite(&datoEscritura, sizeof datoEscritura, 1, f1);
        printf("Fichero creado correctamente\n");
        fclose(f1);

        f2 = fopen("uno.bin", "rb");
        if (f2 == NULL) {
            printf("No se puede abrir el fichero");
            return -1;
        } else {
            fread(&datoLectura, sizeof datoLectura, 1, f2);
            printf("Contenido del fichero: %d", datoLectura);
            fclose(f2);

        }
    }

    return 0;
}