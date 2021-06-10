#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct estructura {
    int codigo;
    char nombre[10];
    struct estructura *siguiente;
} nodo;

typedef nodo *pNodo;

int menu();

nodo *nuevo();

void encolar(pNodo *, pNodo *, int, char *);

void procesar(pNodo *, pNodo *);

void mostrarCola(pNodo *);

void vaciarCola(pNodo *);

int esVacia(int);

int elementosCola(int);

void buscarElemento(pNodo *, int, int);

int main() {

    int contador = 0, opcion, codigo;
    char nombre[10];

    pNodo primero = NULL;
    pNodo ultimo = NULL;

    do {
        opcion = menu();
        if (opcion != 7) {
            switch (opcion) {
                case 1:
                    printf("Introduzca el c%cdigo:", 162);
                    scanf("%d", &codigo);
                    printf("Introduzca el nombre:");
                    scanf(" %s", nombre);
                    encolar(&primero, &ultimo, codigo, nombre);
                    contador++;
                    break;

                case 2:
                    procesar(&primero, &ultimo);
                    contador--;
                    break;

                case 3:
                    vaciarCola(&primero);
                    contador = 0;
                    break;

                case 4:
                    mostrarCola(&primero);
                    break;

                case 5:
                    if (esVacia(contador) == 0) {
                        printf("La cola contiene %d elementos", elementosCola(contador));
                    } else {
                        printf("La cola est%c vac%ca", 160, 161);
                    }
                    break;

                case 6:
                    printf("Introduzca el c%cdigo a buscar:", 162);
                    scanf("%d", &codigo);
                    buscarElemento(&primero, codigo, contador);
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
    printf("5 - Tama%co Cola\n", 164);
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

void encolar(pNodo *primero, pNodo *ultimo, int codigo, char *nombre) {
    printf("\nElemento insertado\n");
    pNodo miNodo;

    miNodo = nuevo();
    miNodo->codigo = codigo;
    strcpy(miNodo->nombre, nombre);

    miNodo->siguiente = NULL;

    if (*ultimo) {
        (*ultimo)->siguiente = miNodo;
    }

    *ultimo = miNodo;

    if (!*primero) {
        *primero = miNodo;
    }
}

void procesar(pNodo *primero, pNodo *ultimo) {
    printf("\nElemento borrado\n");
    pNodo miNodo;


    miNodo = *primero;
    if (miNodo) {

        *primero = miNodo->siguiente;

        printf("Nodo borrado -> C%cdigo: %d\tNombre: %s\n", 162, miNodo->codigo, miNodo->nombre);

        free(miNodo);

        if (!*primero) {
            *ultimo = NULL;
        }
    }
}

void mostrarCola(pNodo *primero) {
    printf("Mostrando la cola:\n");
    pNodo miNodo;

    miNodo = *primero;
    while (miNodo != NULL) {
        printf("C%cdigo: %d\tNombre: %s\n", 162, miNodo->codigo, miNodo->nombre);

        miNodo = miNodo->siguiente;
    }
}

void vaciarCola(pNodo *primero) {
    printf("La cola se ha vaciado");
    *primero = NULL;
};

int esVacia(int contador) {
    if (contador >= 1) {
        return 0;
    } else {
        return 1;
    }
}

int elementosCola(int contador) {
    return contador;
}

void buscarElemento(pNodo *cola, int codigo, int contador) {
    pNodo miNodo;

    miNodo = *cola;

    for (int i = 0; i <= contador; i++) {
        if (miNodo->codigo == codigo) {
            printf("Encontrado en la posici%cn %d -> C%cdigo: %d\tNombre: %s\n", 162, i, 162, miNodo->codigo,
                   miNodo->nombre);
        }
        miNodo = miNodo->siguiente;
    }
}