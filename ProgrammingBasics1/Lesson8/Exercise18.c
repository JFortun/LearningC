#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int matriz[5][5], i, j, k, l, aux, bingo;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            aux = 1;
            matriz[i][j] = rand() % 100;
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 3; l++) {
                    if ((i == k && j == l) || (((k * 4) + l) > ((i * 3) + j))) {
                        aux = 1;
                    } else if (matriz[i][j] == matriz[k][l]) {
                        aux = 0;
                        break;
                    }
                }
                if (aux == 0) {
                    j = j - 1;
                    break;
                }
            }
        }
    }

    printf("Cart%cn generado:\n", 162);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    bingo = 1;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                bingo = 0;
            }
        }
    }

    if (bingo != 1) {
        printf("No ha habido Bingo");
    } else {
        printf("Ha habido Bingo");
    }

    return 0;
}
