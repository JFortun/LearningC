#include <stdio.h>

struct grupo {
    char nombreGrupo[50];
};

struct curso {
    char nombreCurso[50];
    struct grupo grupo;
};

int main() {
    FILE *file;

    for (int i = 1; i <= 6; i++) {
        char nombre[11];
        sprintf(nombre, "Curso%d.dat", i);
        printf("%s", nombre);

        file = fopen(nombre, "wb");
        if (file == NULL) {
            fprintf(stderr, "\nError al abrir el archivo\n");
            return -1;
        }

        struct curso curso1 = {"Curso", "Grupo"};
        fwrite(&curso1, sizeof(struct curso), 1, file);

        printf("\nContenidos escritos\n");

        fclose(file);
    }

    return 0;
}