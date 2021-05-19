#include <stdio.h>

void cuadradoPares();

int main() {

    cuadradoPares();
    return 0;
}

void cuadradoPares() {

    for (int i = 1; i <= 100; i++) {
        if (i%2 == 0){
            printf("%d^2: %d\n", i, i*i);
        }
    }
}