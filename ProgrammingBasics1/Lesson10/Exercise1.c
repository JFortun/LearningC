#include <stdio.h>

int factorial(int);

int main(void) {

    int y = 0;

    for (int i = 0; i <= 100; i++) {
        y += i;
        printf("\n%d   ---Iterativa--->   %d", i, y);
    }

    printf("\nEl factorial de 100 es %d", factorial(100));

    return 0;
}

int factorial(int n) {
    int r;
    if (n == 1) {
        r = 1;
        printf("\nCaso base alcanzado");
    } else {
        printf("\nCaso recursivo para n = %d", n);
        r = n + factorial(n - 1);
        printf("\nn = %d   --->   %d", n, r);
    }

    return r;
}