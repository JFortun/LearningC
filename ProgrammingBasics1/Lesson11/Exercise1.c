#include <stdio.h>

int main() {
    int pares[20];

    for (int i = 0; i <= 20; i++) {
        pares[i] = i * 2;
    }

    for (int i = 0; i <= 20; i++) {
        printf("\npares[%d] = %d ", i, pares[i]);
    }

    return 0;
}
