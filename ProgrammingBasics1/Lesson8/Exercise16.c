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

    int pleno = Random(4);

    for (int i = 1; i <= 14; i++) {
        printf("Equipo ganador del partido %i: EQUIPO-%i\n", i, Random(2));
    }
    switch (pleno) {
        case 1:
            printf("El pleno al 15 es 0 goles");
            break;
        case 2:
            printf("El pleno al 15 es 1 goles");
            break;
        case 3:
            printf("El pleno al 15 es 2 goles");
            break;
        case 4:
            printf("El pleno al 15 es 3 goles o m%cs (M)", 160);
            break;
    }

    return 0;
}