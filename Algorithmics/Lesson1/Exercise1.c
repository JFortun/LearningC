#include <stdio.h>

int main() {
    int tabla[10];
    int i, veces = 0, elemento;

    for (i = 0; i < 10; i++) {
        printf("\nDame el elemento de la posici%cn %d:", 162, i);
        scanf("%d", &tabla[i]);
    }

    printf("\nDame el elemento a buscar:");
    scanf("%d", &elemento);

    for (i = 0; i < 10; i++) {
        if (tabla[i] == elemento) {
            printf("\nEl elemento a buscar se ha encontrado en la posici%cn %d\n", 162, i);
            veces++;
        }
    }

    if (veces == 0) {
        printf("\nEl elemento a buscar NO se ha encontrado\n");
    } else {
        printf("\nEl elemento a buscar se ha encontrado %d veces\n", veces);
    }

    return 0;
}