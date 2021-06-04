#include <stdio.h>

int main() {

    int tabla1[3][3], tabla2[3][3], tablaSuma[3][3], i, j;

    printf("\nIntroduce los elementos de la primera matriz:");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("\nIntroduce el elemento tabla1[%d][%d]:", i + 1, j + 1);
            scanf("%d", &tabla1[i][j]);
        }

    printf("\nIntroduce los elementos de la seguna matriz:");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("\nIntroduce el elemento tabla2[%d][%d]:", i + 1, j + 1);
            scanf("%d", &tabla2[i][j]);
        }

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            tablaSuma[i][j] = tabla1[i][j] + tabla2[i][j];
        }

    printf("\nSuma de las dos matrices:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d   ", tablaSuma[i][j]);
            if (j == 3 - 1) {
                printf("\n\n");
            }
        }

    return 0;
}