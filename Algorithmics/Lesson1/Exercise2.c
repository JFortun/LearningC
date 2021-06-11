#include <stdio.h>

#define tam 10
#define false 0
#define true 1

int main() {
    int tabla[tam], i, encontrado, elemento, inferior, superior, central, veces = 0;

    for (i = 0; i < tam; i++) {
        printf("\nDame el elemento de la posici%cn %d:", 162, i);
        scanf("%d", &tabla[i]);
    }

    printf("\nDame el elemento a buscar:");
    scanf("%d", &elemento);

    encontrado = false;
    inferior = 0;
    superior = tam - 1;

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