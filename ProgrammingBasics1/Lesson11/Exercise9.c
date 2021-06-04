#include <stdio.h>

int main() {

    int tabla[4][3];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nIntroduce un valor para la tabla[%d][%d]:", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    printf("\nElementos de la tabla de 2 dimensiones:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", tabla[i][j]);
            if (j == 2) {
                printf("\n");
            }
        }
    }

    return 0;
}