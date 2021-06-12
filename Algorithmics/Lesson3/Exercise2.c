#include <stdio.h>

#define tam 8

void carga_tablero(int[][tam]);

void mostrar(int[][tam]);

int final(int[][tam]);

int recursivo(int[][tam], int, int, int);

int main() {
    int tablero[tam][tam];
    int columna, fila, contador;
    printf("Indica la columna y la fila desde la que parte el caballo:\n");
    scanf("%d%d", &columna, &fila);
    carga_tablero(tablero); // Rellena tablero con 0
    tablero[columna][fila] = 1; // Ubicación inicial del caballo
    contador = recursivo(tablero, 2, columna, fila); // Búsqueda de la solución
    printf("SOLUCION\nColumna -> %d Fila -> %d numero interaciones %d\n\n", columna, fila, contador);
    mostrar(tablero);

    return 0;
}

void carga_tablero(int arry[][tam]) {
    int j, i;
    for (j = 0; j < tam; j++) {
        for (i = 0; i < tam; i++) {
            arry[j][i] = 0;
        }
    }
}

void mostrar(int arry[][tam]) {
    int j, i;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf(" %2d |", arry[j][i]);
        }
        printf("\n\n");
    }
}

int final(int arry[][tam]) {
    int j, i;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (arry[j][i] == 0) {
                return 0; // No esta listo
            }
        }
    }
    return 1;
}

int recursivo(int tab[][tam], int numero, int x, int y) {
    static int contador = 0;
    contador++;
    int arrx[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int arry[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int newx;
    int newy;
    int indice = 0;
    while (indice < 8 && final(tab) != 1) {
        newx = arrx[indice] + x;
        newy = arry[indice] + y;
        if ((tab[newx][newy] == 0) && (newx < tam && newx >= 0 && newy < tam && newy >= 0)) {
            tab[newx][newy] = numero;
            if (numero != tam * tam) {
                recursivo(tab, numero + 1, newx, newy);
            }
        }
        indice += 1;
    }
    if (final(tab) != 1) { // Mientras no este completado
        tab[x][y] = 0;
    }
    return contador;
}