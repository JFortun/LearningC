#include <stdio.h>

int sumaDigitos(int n);

int main() {
    int numero;

    printf("\nIntroduce un n%cmero:", 163);
    scanf("%d", &numero);

    printf("La suma de los d%cgitos de %d es %d\n", 161, numero, sumaDigitos(numero));
    return 0;
}

int sumaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10 + sumaDigitos(n / 10));
}