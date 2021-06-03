#include <stdio.h>

int revertirNumero(int);

int main() {
    int numero;

    printf("\nIntroduce un n%cmero:", 163);
    scanf("%d", &numero);

    printf("\nTras revertirlo, el n%cmero es: %d", 163, revertirNumero(numero));
    return 0;
}

int aux1 = 0, aux2;

revertirNumero(int num) {
    if (num) {
        aux2 = num % 10;
        aux1 = aux1 * 10 + aux2;
        revertirNumero(num / 10);
    } else
        return aux1;
    return aux1;
}