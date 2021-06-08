#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct estructura {
    int codigo;
    struct estructura *siguiente;
} *nodo;

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max) + 1;
}

void borrarNodo(int);

void mostrarLista();

int main() {

    Randomize();

    struct estructura *miNodo, *auxiliar;
    int i, posicion;

    nodo = (struct estructura *) malloc(sizeof(struct estructura));
    nodo->codigo = Random(100);
    nodo->siguiente = NULL;
    auxiliar = nodo;

    for (i = 2; i <= 5; i++) {
        miNodo = (struct estructura *) malloc(sizeof(struct estructura));
        miNodo->codigo = Random(100);
        miNodo->siguiente = NULL;
        auxiliar->siguiente = miNodo;
        auxiliar = auxiliar->siguiente;
    }

    printf("\nElementos en la lista\n");
    mostrarLista();

    printf("Introduzca la posici%cn a borrar:", 162);
    scanf("%d", &posicion);
    borrarNodo(posicion);

    printf("\nElementos en la lista\n");
    mostrarLista();

    return 0;
}

void borrarNodo(int posicion) {
    int i;
    struct estructura *aBorrar, *nodoAnterior;

    aBorrar = nodo;
    nodoAnterior = nodo;

    for (i = 2; i <= posicion; i++) {
        nodoAnterior = aBorrar;
        aBorrar = aBorrar->siguiente;

        if (aBorrar == NULL) {
            break;
        }
    }

    if (aBorrar != NULL) {
        if (aBorrar == nodo) {
            nodo = nodo->siguiente;
        }

        nodoAnterior->siguiente = aBorrar->siguiente;
        aBorrar->siguiente = NULL;

        printf("\nC%cdigo borrado: %d\n", 162, aBorrar->codigo);

        free(aBorrar);

        printf("Se ha borrado el elemento de la lista\n");
    } else {
        printf("No existe esa posici%cn", 162);
    }
}

void mostrarLista() {
    struct estructura *temp;

    temp = nodo;
    while (temp != NULL) {
        printf("C%cdigo: %d\n", 162, temp->codigo);
        temp = temp->siguiente;
    }
}