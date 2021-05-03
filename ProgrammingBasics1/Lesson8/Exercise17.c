#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max) + 1;
}

int main() {
    Randomize();

    int numeroGenerado = Random(20), numeroElegido, intentos = 0;

    do {
        printf("Indica un n%cmero:\n", 163);
        scanf("%d", &numeroElegido);
        if (numeroElegido < numeroGenerado) {
            printf("El n%cmero indicado es menor que el n%cmero secreto:\n", 163, 163);
        } else if (numeroElegido > numeroGenerado) {
            printf("El n%cmero indicado es mayor que el n%cmero secreto:\n", 163, 163);
        }
        intentos++;

    } while (numeroElegido != numeroGenerado);

    printf("Has acertado. Has tardado %i intentos.\n", intentos);

    return 0;
}