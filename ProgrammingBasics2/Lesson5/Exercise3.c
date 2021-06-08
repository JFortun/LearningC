#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estructura {
    int codigo;
    char nombre[10];
    struct estructura *siguiente;
} nodo;

nodo *nuevo();

int menu();

int main() {

    int opcion, codigo, i, posicion;
    char nombre[10];

    nodo *miLista = nuevo();
    nodo *miNodo = nuevo();

    printf("Introduzca el c%cdigo:", 162);
    scanf("%d", &codigo);
    printf("Introduzca el nombre");
    scanf(" %s", nombre);

    miNodo->codigo = codigo;
    strcpy(miNodo->nombre, nombre);
    miLista = miNodo;

    do {
        opcion = menu();
        if (opcion == 1) {
            printf("Introduzca el c%cdigo:", 162);
            scanf("%d", &codigo);
            printf("Introduzca el nombre");
            scanf(" %s", nombre);
            miNodo = nuevo();
            miNodo->codigo = codigo;
            strcpy(miNodo->nombre, nombre);
            nodo *auxiliar = nuevo();
            auxiliar = miLista;
            printf("Introduzca la posici%cn en la que introducir:", 162);
            scanf("%d", &posicion);
            for (i = 2; i <= posicion - 1; i++) {
                auxiliar = auxiliar->siguiente;

                if (auxiliar == NULL)
                    break;
            }
            if (auxiliar != NULL) {
                miNodo->siguiente = auxiliar->siguiente;
                auxiliar->siguiente = miNodo;
            }
        }
    } while (opcion != 2);

    nodo *auxiliar = nuevo();
    auxiliar = miLista;
    while (auxiliar != NULL) {
        // Procesar el nodo apuntado por el auxiliar
        printf("C%cdigo: %3d \t Nombre: %s\n", 162, auxiliar->codigo, auxiliar->nombre);
        // Avanzamos el puntero auxiliar
        auxiliar = auxiliar->siguiente;
    }

    return 0;
}

nodo *nuevo() {
    nodo *p;
    p = (nodo *) malloc(sizeof(nodo));
    p->siguiente = NULL;
    return (p);
}

int menu() {
    int opcion;

    printf("\n----- Men%c -----\n", 163);
    printf("1 - Insertar nuevo elemento en la lista\n");
    printf("2 - Salir\n");
    printf("Indica una opci%cn del men%c:\n", 162, 163);
    scanf("%d", &opcion);

    return opcion;
}