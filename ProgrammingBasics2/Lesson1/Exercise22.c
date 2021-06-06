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
    struct persona persona;

    file = fopen("persona.per", "rb");
    if (file == NULL) {
        fprintf(stderr, "\nError al abrir el archivo\n");
        return -1;
    }

    while (fread(&persona, sizeof(struct persona), 1, file)) {
        printf("%s %s %s %s %d\n", persona.nombre, persona.apellidos, persona.dni, persona.domicilio, persona.telefono);
    }

    fclose(file);

    return 0;
}