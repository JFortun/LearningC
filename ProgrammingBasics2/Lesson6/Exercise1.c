#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct estructura {
    int codigo;
    char nombre[10];
    struct estructura *siguiente;
} nodo;

typedef nodo *pNodo;
typedef nodo *Pila;

int menu();

nodo *nuevo();

void push(Pila *, int, char *);

void pop(Pila *);

void mostrarPila(Pila *);

void vaciarPila(Pila *);

int esVacia(int);

int elementosPila(int);

void buscarElemento(Pila *, int, int);

int main() {

    int contador = 0, opcion, codigo;
    char nombre[10];

    Pila miPila = NULL;


    do {
        opcion = menu();
        if (opcion != 7) {
            switch (opcion) {
                case 1:
                    printf("Introduzca el c%cdigo:", 162);
                    scanf("%d", &codigo);
                    printf("Introduzca el nombre:");
                    scanf(" %s", nombre);
                    push(&miPila, codigo, nombre);
                    contador++;
                    break;

                case 2:
                    pop(&miPila);
                    contador--;
                    break;

                case 3:
                    vaciarPila(&miPila);
                    contador = 0;
                    break;

                case 4:
                    mostrarPila(&miPila);
                    break;

                case 5:
                    if (esVacia(contador) == 0) {
                        printf("La pila contiene %d elementos", elementosPila(contador));
                    } else {
                        printf("La pila est%c vac%ca", 160, 161);
                    }
                    break;

                case 6:
                    printf("Introduzca el c%cdigo a buscar:", 162);
                    scanf("%d", &codigo);
                    buscarElemento(&miPila, codigo, contador);
                    break;
            }
        }
    } while (opcion != 7);

    return 0;
}

int menu() {
    int opcion;

    printf("\n----- Men%c -----\n", 163);
    printf("1 - Insertar\n");
    printf("2 - Sacar\n");
    printf("3 - vaciar\n");
    printf("4 - Mostrar\n");
    printf("5 - Tama%co Pila\n", 164);
    printf("6 - Buscar elemento\n");
    printf("7 - Salir\n");
    printf("Indica una opci%cn del men%c:\n", 162, 163);
    scanf("%d", &opcion);

    return opcion;
}

nodo *nuevo() {
    nodo *p;
    p = (nodo *) malloc(sizeof(nodo));
    p->siguiente = NULL;
    return (p);
}

void push(Pila *pila, int codigo, char *nombre) {
    printf("\nElemento insertado\n");
    pNodo miNodo; // Variable auxiliar para manipular un nodo

    // Crear un nodo nuevo
    miNodo = nuevo();
    miNodo->codigo = codigo;
    strcpy(miNodo->nombre, nombre);

    // Añadimos la pila a continuación del nuevo nodo
    miNodo->siguiente = *pila;

    // Ahora, el comienzo de la pila es el nuevo nodo
    *pila = miNodo;
}

void pop(Pila *pila) {
    printf("\nElemento borrado\n");
    pNodo miNodo; // Variable auxiliar para manipular un nodo

    // miNodo apunta al primer elemento de la pila
    miNodo = *pila;
    if (miNodo) { //Nos aseguramos de que hay nodos en la pila

        // Asignamos a pila todas la pila menos el primer elemento
        *pila = miNodo->siguiente;

        // Mostramos la información del nodo
        printf("Nodo borrado -> C%cdigo: %d\tNombre: %s\n", 162, miNodo->codigo, miNodo->nombre);

        // Liberar el nodo
        free(miNodo);
    }
}

void mostrarPila(Pila *pila) {
    printf("Mostrando la pila:\n");
    pNodo miNodo; // Variable auxiliar para manipular un nodo

    // miNodo apunta al primer elemento de la lista
    miNodo = *pila;
    while (miNodo != NULL) {
        printf("C%cdigo: %d\tNombre: %s\n", 162, miNodo->codigo, miNodo->nombre);

        // Avanzamos el puntero miNodo
        miNodo = miNodo->siguiente;
    }
}

void vaciarPila(Pila *pila) {
    printf("La pila se ha vaciado");
    *pila = NULL;
};

int esVacia(int contador) {
    if (contador >= 1) {
        return 0;
    } else {
        return 1;
    }
}

int elementosPila(int contador) {
    return contador;
}

void buscarElemento(Pila *pila, int codigo, int contador) {

    printf("Mostrando la pila:\n");
    pNodo miNodo; // Variable auxiliar para manipular un nodo

    // miNodo apunta al primer elemento de la lista
    miNodo = *pila;

    for (int i = 0; i <= contador; i++) {
        if (miNodo->codigo == codigo) {
            printf("Encontrado en la posici%cn %d -> C%cdigo: %d\tNombre: %s\n", 162, i, 162, miNodo->codigo,
                   miNodo->nombre);
        }
        miNodo = miNodo->siguiente;
    }
}