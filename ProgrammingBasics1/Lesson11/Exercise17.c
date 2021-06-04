#include <stdio.h>

int main() {

    int tabla[3][3], tabla2[3][3], i, j, fila, columna, contador = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nIntroduce un valor para la tabla[%d][%d]:", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    printf("\nElementos de la tabla de 2 dimensiones:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", tabla[i][j]);
            if (j == 2) {
                printf("\n");
            }
        }
    }

    for (fila = 0; fila < i; fila++) {
        for (columna = 0; columna < j; columna++) {
            tabla2[columna][fila] = -1 * tabla[fila][columna];
        }
    }

    for (fila = 0; fila < i; fila++) {
        for (columna = 0; columna < j; columna++) {
            if (tabla[fila][columna] != -1 * tabla2[fila][columna]) {
                contador++;
                break;
            }
        }
    }
    if (contador == 1) {
        printf("\nLa matriz es antisim%ctrica", 130);
    } else {
        printf("\nLa matriz no es antisim%ctrica", 130);
    }

    return 0;
}