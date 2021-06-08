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

void borrarUltimoNodo();

void mostrarLista();

int main() {

    Randomize();

    struct estructura *miNodo, *auxiliar;
    int i;

    nodo = (struct estructura *) malloc(sizeof(struct estructura));
    nodo->codigo = Random(100);
    nodo->siguiente = NULL;
    auxiliar = nodo;

    for (i = 2; i <= 3; i++) {
        miNodo = (struct estructura *) malloc(sizeof(struct estructura));
        miNodo->codigo = Random(100);
        miNodo->siguiente = NULL;
        auxiliar->siguiente = miNodo;
        auxiliar = auxiliar->siguiente;
    }

    printf("\nElementos en la lista\n");
    mostrarLista();

    borrarUltimoNodo();

    printf("\nElementos en la lista\n");
    mostrarLista();

    return 0;
}

void borrarUltimoNodo() {
    struct estructura *aBorrar, *auxUltimoNodo;

    aBorrar = nodo;
    auxUltimoNodo = nodo;

    while (aBorrar->siguiente != NULL) {
        auxUltimoNodo = aBorrar;
        aBorrar = aBorrar->siguiente;
    }

    if (aBorrar == nodo) {
        nodo = NULL;
    } else {
        auxUltimoNodo->siguiente = NULL;
    }
    printf("\nC%cdigo borrado: %d\n", 162, aBorrar->codigo);

    free(aBorrar);

    printf("Se ha borrado el %cltimo elemento de la lista\n", 163);

}

void mostrarLista() {
    struct estructura *temp;

    temp = nodo;
    while (temp != NULL) {
        printf("C%cdigo: %d\n", 162, temp->codigo);
        temp = temp->siguiente;
    }
}