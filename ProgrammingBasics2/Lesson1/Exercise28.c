#include <stdio.h>
#include <string.h>

int menu();

struct listin {
    char nombre[50];
    char apellidos[50];
    int telefono;
};

int main() {
    FILE *file;
    struct listin listin[21];

    file = fopen("listin.bin", "wb");
    if (file == NULL) {
        fprintf(stderr, "\nError al abrir el archivo\n");
        return -1;
    }
    for (int i = 1; i <= 20; i++) {
        char *vacio = "Vacio";
        strcpy(listin[i].nombre, vacio);
        strcpy(listin[i].apellidos, vacio);
        listin[i].telefono = 0;
    }

    fwrite(&listin, sizeof(struct listin), 1, file);

    printf("Contenidos escritos\n");

    fclose(file);

    int opcion;

    do {
        opcion = menu();
        switch (opcion) {
            case 1 :
                file = fopen("listin.bin", "rb");
                if (file == NULL) {
                    fprintf(stderr, "\nError al abrir el archivo\n");
                    return -1;
                }
                fprintf(stderr, "\nEl contenido del listin es:\n");
                for (int i = 1; i <= 20; i++) {
                    printf("%s %s %d\n", listin[i].nombre, listin[i].apellidos, listin[i].telefono);
                }
                fclose(file);
                break;

            case 2 :
                file = fopen("listin.bin", "wb");
                if (file == NULL) {
                    fprintf(stderr, "\nError al abrir el archivo\n");
                    return -1;
                }
                for (int i = 1; i <= 20; i++) {
                    char cadena[100];
                    printf("\nIntroduce el nombre del elemento %d:", i);
                    scanf("%s", cadena);
                    strcpy(listin[i].nombre, cadena);
                    printf("\nIntroduce el apellido del elemento %d:", i);
                    scanf("%s", cadena);
                    strcpy(listin[i].apellidos, cadena);
                    int numero;
                    printf("\nIntroduce el n%cmero de tlf del elemento %d:", 163, i);
                    scanf("%d", &numero);
                    listin[i].telefono = 0;
                }

                fwrite(&listin, sizeof(struct listin), 1, file);

                printf("Contenidos escritos\n");

                fclose(file);
                break;

            case 3 :
                printf("El listin se ha vaciado\n");
                file = fopen("listin.bin", "wb");
                if (file == NULL) {
                    fprintf(stderr, "\nError al abrir el archivo\n");
                    return -1;
                }
                for (int i = 1; i <= 20; i++) {
                    char *vacio = "Vacio";
                    strcpy(listin[i].nombre, vacio);
                    strcpy(listin[i].apellidos, vacio);
                    listin[i].telefono = 0;
                }

                fwrite(&listin, sizeof(struct listin), 1, file);

                fclose(file);
                break;
        }
    } while (opcion != 4);

    return 0;
}

int menu() {
    int opcion;

    printf("\n----- Men%c -----\n", 163);
    printf("1 - Consultar\n");
    printf("2 - Alta\n");
    printf("3 - Baja\n");
    printf("4 - Salir\n");
    printf("Indica una opci%cn del men%c:\n", 162, 163);
    scanf("%d", &opcion);

    return opcion;
}