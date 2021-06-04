#include <stdio.h>

int main() {

    char tabla[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nIntroduce una letra para la tabla[%d][%d]:", i, j);
            scanf("%c", &tabla[i][j]);
        }
    }

    printf("\nElementos de la tabla en su equivalente numerico en el abecedario:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", tabla[i][j]);
            if (j == 2) {
                printf("\n\n");
            }
        }
    }

    return 0;
}