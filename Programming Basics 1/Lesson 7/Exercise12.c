#include <stdio.h>

int main() {
    int x;

    printf("Indica el valor de x para el polinomio 3x^5-5x^3+2x-7:\n");
    scanf("%d", &x);

    printf("La soluci%cn al polinomio cuando x=%d es: %d", 162, x, 3 * (x * x * x * x * x) - 5 * (x * x * x) + 2 * x - 7);

    return 0;
}