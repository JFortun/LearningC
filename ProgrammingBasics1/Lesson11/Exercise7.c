#include <stdio.h>

int main() {
    int tabla[10];
    float suma = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nEscribe un n%cmero:", 163);
        scanf("%d", &tabla[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("\ntabla[%d] = %d ", i, tabla[i]);
        suma += tabla[i];
    }
    printf("\nLa media es: %f", suma / 10);

    for (int i = 1; i < 10; ++i) {
        if (tabla[0] < tabla[i]) {
            tabla[0] = tabla[i];
        }
    }
    printf("\nEl n%cmero mayor es: %d", 163, tabla[0]);

    for (int i = 1; i < 10; ++i) {
        if (tabla[0] > tabla[i]) {
            tabla[0] = tabla[i];
        }
    }
    printf("\nEl n%cmero menor es: %d", 163, tabla[0]);

    return 0;
}