#include <stdio.h>

int mcd(int n1, int n2);

int main() {
    int numero1, numero2;

    printf("Introduce dos n%cmeros:\n", 163);
    scanf("%d%d", &numero1, &numero2);
    printf("El MCD de %d y %d es %d", numero1, numero2, mcd(numero1, numero2));
    return 0;
}

int mcd(int numero1, int numero2) {
    if (numero2 != 0) {
        return mcd(numero2, numero1 % numero2);
    } else {
        return numero1;
    }
}