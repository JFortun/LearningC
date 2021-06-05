#include <stdio.h>

struct {
    int idContacto;
    char nombreContacto[50];
    int telefonoContacto;
    char emailContacto[50];
} contacto1, contacto2, contacto3;

int menu();

int main(void) {

    int opcion, existencias = 0;

    do {
        opcion = menu();
        switch (opcion) {
            case 1 :
                switch (existencias) {
                    case 0 :
                        printf("No existen contactos guardados\n");
                        break;

                    case 1 :
                        printf("\nID del contacto: %d", contacto1.idContacto);
                        printf("\nNombre del contacto: %s", contacto1.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto1.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto1.emailContacto);
                        break;

                    case 2 :
                        printf("\nID del contacto: %d", contacto1.idContacto);
                        printf("\nNombre del contacto: %s", contacto1.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto1.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto1.emailContacto);
                        printf("\n\nID del contacto: %d", contacto2.idContacto);
                        printf("\nNombre del contacto: %s", contacto2.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto2.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto2.emailContacto);
                        break;

                    case 3 :
                        printf("\nID del contacto: %d", contacto1.idContacto);
                        printf("\nNombre del contacto: %s", contacto1.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto1.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto1.emailContacto);
                        printf("\n\nID del contacto: %d", contacto2.idContacto);
                        printf("\nNombre del contacto: %s", contacto2.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto2.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto2.emailContacto);
                        printf("\n\nID del contacto: %d", contacto3.idContacto);
                        printf("\nNombre del contacto: %s", contacto3.nombreContacto);
                        printf("\nTelefono del contacto: %d", contacto3.telefonoContacto);
                        printf("\nEmail del contacto: %s", contacto3.emailContacto);
                        break;
                }
                break;

            case 2 :
                switch (existencias) {
                    case 0 :
                        printf("\nID del contacto:");
                        scanf("%d", &contacto1.idContacto);
                        printf("\nNombre del contacto:");
                        scanf("%s", contacto1.nombreContacto);
                        printf("\nTelefono del contacto:");
                        scanf("%d", &contacto1.telefonoContacto);
                        printf("\nEmail del contacto:");
                        scanf("%s", contacto1.emailContacto);
                        existencias++;
                        break;

                    case 1 :
                        printf("\nID del contacto:");
                        scanf("%d", &contacto2.idContacto);
                        printf("\nNombre del contacto:");
                        scanf("%s", contacto2.nombreContacto);
                        printf("\nTelefono del contacto:");
                        scanf("%d", &contacto2.telefonoContacto);
                        printf("\nEmail del contacto:");
                        scanf("%s", contacto2.emailContacto);
                        existencias++;
                        break;

                    case 2 :
                        printf("\nID del contacto:");
                        scanf("%d", &contacto3.idContacto);
                        printf("\nNombre del contacto:");
                        scanf("%s", contacto3.nombreContacto);
                        printf("\nTelefono del contacto:");
                        scanf("%d", &contacto3.telefonoContacto);
                        printf("\nEmail del contacto:");
                        scanf("%s", contacto3.emailContacto);
                        existencias++;
                        break;
                }
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