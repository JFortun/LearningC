/*
 * Realizar  un  programa  que  lea  una  matriz  3x3  y calcule la suma de las posiciones pares
 * y la suma de las posiciones impares. Una posición se dice que es par si i+j es par.
 * El programa calculará mediante una función la diferencia entre dichas sumas.
 */


#include <stdio.h>

int main() {

    int tabla[3][3];
    int i, j, pares = 0, impares = 0;

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
            } else if ((i + j) % 2 == 0) {
                pares = pares + 1;
            } else if ((i + j) % 2 != 0) {
                impares = impares + 1;
            }
        }
    }

    printf("\nHay %d elementos pares y %d elementos impares", pares, impares);


    return 0;
}