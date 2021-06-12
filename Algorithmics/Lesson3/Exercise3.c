#include <stdio.h>
#include <math.h>

int tablero[20], contador;

void mostrar(int);

int comprobarPosicion(int, int);

void reina(int, int);

int main() {
    int numero;

    printf("\nIntroduce el n%cmero de reinas:", 163);
    scanf("%d", &numero);
    reina(1, numero);
    return 0;
}

void mostrar(int numero) {
    int i, j;
    printf("\n---------------------------------------------------------------------\n");
    printf("\n\n\nSoluci%cn %d:", 162, ++contador);
    printf("\n\nCoordenadas\n");
    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= numero; j++) {
            if (j == tablero[i]) {
                printf("Reina %d -> %d,%d\n", i, i, j);
            }
        }
    }
    for (i = 1; i <= numero; ++i) {
        printf("\n\n");
        for (j = 1; j <= numero; ++j) {
            if (tablero[i] == j) {
                printf("\t*");
            } else {
                printf("\t0");
            }
        }
    }
}

int comprobarPosicion(int fila, int columna) {
    int i;
    for (i = 1; i <= fila - 1; ++i) {
        if (tablero[i] == columna) {
            return 0;
        } else if (abs(tablero[i] - columna) == abs(i - fila)) {
            return 0;
        }
    }

    return 1;
}

void reina(int fila, int numero) {
    int columna;
    for (columna = 1; columna <= numero; ++columna) {
        if (comprobarPosicion(fila, columna)) {
            tablero[fila] = columna;
            if (fila == numero) {
                mostrar(numero);
            } else {
                reina(fila + 1, numero);
            }
        }
    }
}