#include <stdio.h>

struct persona {
    char nombre[50];
    char apellidos[50];
    char dni[50];
    char domicilio[50];
    int telefono;
};

int main() {
    FILE *file;

    file = fopen("persona.per", "wb");
    if (file == NULL) {
        fprintf(stderr, "\nError al abrir el archivo\n");
        return -1;
    }

    struct persona persona1 = {"Jose", "Lara", "49123456K", "Calle_Sol", 646003322};
    struct persona persona2 = {"Luis", "Lara", "49123456K", "Calle_Sol", 646003322};
    struct persona persona3 = {"Alberto", "Lara", "49123456K", "Calle_Sol", 646003322};
    struct persona persona4 = {"Juan", "Lara", "49123456K", "Calle_Sol", 646003322};
    struct persona persona5 = {"Pedro", "Lara", "49123456K", "Calle_Sol", 646003322};

    fwrite(&persona1, sizeof(struct persona), 1, file);
    fwrite(&persona2, sizeof(struct persona), 1, file);
    fwrite(&persona3, sizeof(struct persona), 1, file);
    fwrite(&persona4, sizeof(struct persona), 1, file);
    fwrite(&persona5, sizeof(struct persona), 1, file);

    printf("Contenidos escritos\n");

    fclose(file);

    return 0;
}