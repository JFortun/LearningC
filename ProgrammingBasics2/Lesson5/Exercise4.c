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

void borrarPrimerElemento();

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

    borrarPrimerElemento();

    printf("\nElementos en la lista\n");
    mostrarLista();

    return 0;
}

void borrarPrimerElemento() {
    struct estructura *aBorrar;

    aBorrar = nodo;
    nodo = nodo->siguiente;
    printf("\nC%cdigo borrado: %d\n", 162, aBorrar->codigo);
    free(aBorrar);
    printf("Se ha borrado el primer elemento de la lista\n");
}

void mostrarLista() {
    struct estructura *temp;

    temp = nodo;
    while (temp != NULL) {
        printf("C%cdigo: %d\n", 162, temp->codigo);
        temp = temp->siguiente;
    }
}