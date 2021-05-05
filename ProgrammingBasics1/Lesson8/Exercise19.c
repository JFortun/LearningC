#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 10001

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max) + 1;
}

int main() {
    Randomize();

    int i, x, cantidad[MAX] = {0}, numeros[MAX] = {0};

    for (i = 1; i < MAX; i++) {
        numeros[i] = Random(100);
    }

    for (i = 1; i < MAX; i++) {
        x = numeros[i];
        cantidad[x]++;
    }

    for (i = 1; i < 101; i++) {
        printf("El n%cmero %d ha salido %d veces, lo que es un %.2f%% del total.\n", 163, i, cantidad[i], (cantidad[i] * 100.0) / 10000.0);
    }

    return 0;
}