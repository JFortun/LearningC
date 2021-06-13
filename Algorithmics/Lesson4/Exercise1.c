#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NCASILLAS 100
#define VACIO NULL

static char *BORRADO = "";

typedef char **TablaHash;

int menu();

void error(char *);

TablaHash CrearTablaHash();

void DestruirTablaHash(TablaHash);

int Hash(char *);

int Localizar(char *, TablaHash);

int Localizar1(char *, TablaHash);

int MiembroHash(char *, TablaHash);

void InsertarHash(char *, TablaHash);

void BorrarHash(char *, TablaHash);

void RecorrerTablaHash(TablaHash);

int main() {
    int opcion;
    char cadena[100];
    TablaHash t;

    do {
        opcion = menu();
        if (opcion != 5) {
            switch (opcion) {
                case 1:
                    t = CrearTablaHash();
                    printf("Tabla Hash creada\n");
                    break;

                case 2:
                    printf("Introduce una cadena:\n");
                    scanf("%s", cadena);
                    printf("%s --> %d\n", cadena, Hash(cadena));
                    InsertarHash(cadena, t);
                    break;

                case 3:
                    printf("El contenido de la Tabla Hash es el siguiente:\n");
                    RecorrerTablaHash(t);
                    break;

                case 4:
                    printf("Introduce una cadena a buscar:\n");
                    scanf("%s", cadena);
                    printf("La cadena introducida se encuentra en la posici%cn %d\n", 162, Localizar(cadena, t));
                    break;
            }
        }
    } while (opcion != 5);

    return 0;
}

int menu() {
    int opcion;

    printf("\n----- Men%c -----\n", 163);
    printf("1 - Crear Tabla Hash\n");
    printf("2 - Insertar Cadena\n");
    printf("3 - Recorrer Tabla Hash\n");
    printf("4 - Encontrar Cadena\n");
    printf("5 - Salir\n");
    printf("Indica una opci%cn del men%c:\n", 162, 163);
    scanf("%d", &opcion);

    return opcion;
}

void error(char *mensaje) {
    printf("%c\n", *mensaje);
}

TablaHash CrearTablaHash() {
    TablaHash t;
    register int i;
    t = (TablaHash) malloc(NCASILLAS * sizeof(char *));
    if (t == NULL) {
        error("Memoria Insuficiente");
    }
    for (i = 0; i < NCASILLAS; i++) {
        t[i] = VACIO;
    }
    return t;
}

void DestruirTablaHash(TablaHash t) {
    register int i;
    for (i = 0; i < NCASILLAS; i++) {
        if (t[i] != VACIO && t[i] != BORRADO) {
            free(t[i]);
        }
    }
    free(t);
}

int Hash(char *cad) {
    int valor;
    char *c;
    for (c = cad, valor = 0; *c; c++) {
        valor += (int) *c;
    }
    return (valor % NCASILLAS);
}

int Localizar(char *x, TablaHash t) {
    int ini, i, aux;
    ini = Hash(x);
    for (i = 0; i < NCASILLAS; i++) {
        aux = (ini + i) % NCASILLAS;
        if (t[aux] == VACIO) {
            return aux;
        }
        if (!strcmp(t[aux], x)) {
            return aux;
        }
    }
    return ini;
}

int Localizar1(char *x, TablaHash t) {
    int ini, i, aux;
    ini = Hash(x);
    for (i = 0; i < NCASILLAS; i++) {
        aux = (ini + i) % NCASILLAS;
        if (t[aux] == VACIO || t[aux] == BORRADO) {
            return aux;
        }
        if (!strcmp(t[aux], x)) {
            return aux;
        }
    }
    return ini;
}

int MiembroHash(char *cad, TablaHash t) {
    int pos = Localizar(cad, t);
    if (t[pos] == VACIO) {
        return 0;
    } else {
        return (!strcmp(t[pos], cad));
    }
}

void InsertarHash(char *cad, TablaHash t) {
    int pos;
    if (!cad) {
        error("Cadena inexistente");
    }
    if (!MiembroHash(cad, t)) {
        pos = Localizar1(cad, t);
        if (t[pos] == VACIO || t[pos] == BORRADO) {
            t[pos] = (char *) malloc((strlen(cad) + 1) * sizeof(char));
            strcpy(t[pos], cad);
        } else {
            error("Tabla Llena");
        }
    }
}

void BorrarHash(char *cad, TablaHash t) {
    int pos = Localizar(cad, t);
    if (t[pos] != VACIO && t[pos] != BORRADO) {
        if (!strcmp(t[pos], cad)) {
            free(t[pos]);
            t[pos] = BORRADO;
        }
    }
}

void RecorrerTablaHash(TablaHash t) {
    for (int i = 0; i < NCASILLAS; i++) {
        if (((int) t[i]) == 0) {
            printf("No asignado -");
        } else {
            printf("%d - ", (int) t[i]);

        }
    }
}