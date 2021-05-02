#include <stdio.h>
#include <stdlib.h>

int main() {
    int primitiva[6];

    for (int i = 0; i <= 6; ++i) {
        primitiva[i] = rand() % 10;
    }

    printf("La primitiva generada es %d%d%d%d%d%d y el complementario es %d", primitiva[0], primitiva[1], primitiva[2],
           primitiva[3], primitiva[4], primitiva[5], primitiva[6]);

    return 0;
}