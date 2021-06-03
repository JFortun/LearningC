#include <stdio.h>

int recursiva(int);

int main(void) {
    int numero;

    printf("\nIndica un n%cmero:", 163);
    scanf("%d", &numero);
    printf("\nLa sucesi%cn n*(n-1) para el caso introducido es %d", 162, recursiva(numero));

    return 0;
}

int recursiva(int n) {
    int r;
    if (n == 1) {
        r = 1;
        printf("\nCaso base alcanzado");
    } else {
        printf("\nCaso recursivo para n = %d", n);
        r = n * recursiva(n - 1);
        printf("\nn = %d   --->   %d", n, r);
    }

    return r;
}