#include <stdio.h>

void primo();

int mayorQue2();

int main() {

    primo();

    return 0;
}

void primo() {
    int numero = mayorQue2();

    if (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0 && numero % 7 != 0 || numero == 2 || numero == 3 || numero == 5 || numero == 7) {
        printf("El n%cmero es primo: %d\n", 163, numero);

    } else {
        printf("El n%cmero no es primo: %d\n", 163, numero);
    }
}

int mayorQue2() {
    int numero = 0;
    while (numero <= 2) {
        printf("Introduce un n%cmero mayo que 2:\n", 163);
        scanf("%d", &numero);
    }

    return numero;
}