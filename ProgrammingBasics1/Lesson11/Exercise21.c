#include <stdio.h>

int main() {

    int tabla[4][4];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("\nIntroduce un valor para la tabla[%d][%d]:", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    printf("\nElementos de la tabla de 2 dimensiones:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d   ", tabla[i][j]);
            if (j == 3) {
                printf("\n\n");
            }
        }
    }
    if (tabla[3][1] == 0 && tabla[2][2] == 0 && tabla[1][3] == 0 && tabla[3][2] == 0 && tabla[2][3] == 0 && tabla[3][3] == 0) {
        printf("\nLa matriz es triangular superior:\n");
    } else if (tabla[0][0] == 0 && tabla[0][1] == 0 && tabla[1][0] == 0 && tabla[0][2] == 0 && tabla[1][1] == 0 && tabla[2][0] == 0) {
        printf("\nLa matriz es triangular inferior:\n");
    } else {
        printf("\nLa matriz no es ni triangular superior ni inferior:\n");
    }

    return 0;
}