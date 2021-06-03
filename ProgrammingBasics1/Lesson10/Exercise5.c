#include <stdio.h>

int recursiva(int);

int main(void) {

    int numero;

    printf("Indica el n%cmero limite hasta el que quieres hallar la suma de los pares:\n", 163);
    scanf("%d", &numero);

    printf("\nLa suma de los pares de los primeros %d n%cmeros es %d", numero, 163, recursiva(numero));

    return 0;
}

int recursiva(int numero) {
    int r;
    if (numero == 1) {
        r = 1;
        printf("\nCaso base alcanzado");
    } else {
        printf("\nCaso recursivo para n = %d", numero);
        r = numero + recursiva(numero - 1);
        if (numero % 2 == 0) {
            printf("\nn = %d   --->   %d", numero, r);
        }

    }

    return r;
}