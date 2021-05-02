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
    int veces;

    printf("Indica el n%cmero de veces que debe tirarse el dado: \n", 163);
    scanf("%d", &veces);

    Randomize();

    for (int i = 1; i <= veces; i++) {
        printf("Tirada %i: %i\n", i, Random(6));
    }

    return 0;
}