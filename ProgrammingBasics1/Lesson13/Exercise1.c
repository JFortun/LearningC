#include <stdio.h>
#include <stdlib.h>

int menu();

typedef struct {
    int idContacto;
    char *nombreContacto;
    int telefonoContacto;
    char *emailContacto;
} contactos;

int main() {
    int opcion, existencias = 0, i;
    // Creo el array de contactos de tamaño 10 y le asigno memoria.
    contactos *contacto = malloc(10 * sizeof *contacto);

    do {
        opcion = menu();
        switch (opcion) {
            case 1 :
                for (i = 0; i < existencias; i++) {
                    printf("ID: %d, Nombre: %s, Telefono: %d, Email: %s\n", contacto[i].idContacto,
                           contacto[i].nombreContacto, contacto[i].telefonoContacto, contacto[i].emailContacto);
                }
                break;

            case 2 :
                printf("\nID del contacto:");
                scanf("%d", &contacto[existencias].idContacto);
                printf("\nNombre del contacto:");
                contacto[existencias].nombreContacto = (char *) malloc(sizeof(char *));
                scanf("%s", contacto[existencias].nombreContacto);
                printf("\nTelefono del contacto:");
                scanf("%d", &contacto[existencias].telefonoContacto);
                printf("\nEmail del contacto:");
                contacto[existencias].emailContacto = (char *) malloc(sizeof(char *));
                scanf("%s", contacto[existencias].emailContacto);
                existencias++;
                break;

            case 3 :
                printf("La agenda se ha vaciado\n");
                existencias = 0;
                break;
        }
    } while (opcion != 4);

    return 0;
}

int menu() {
    int opcion;

    printf("\n----- Men%c -----\n", 163);
    printf("1 - Consultar agenda\n");
    printf("2 - Agregar contacto\n");
    printf("3 - Vaciar agenda\n");
    printf("4 - Salir\n");
    printf("Indica una opci%cn del men%c:\n", 162, 163);
    scanf("%d", &opcion);

    return opcion;
}