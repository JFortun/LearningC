#include <stdio.h>

void superaMedia(int tabla[], int tamano);

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
    superaMedia(tabla, 10);


    return 0;
}

void superaMedia(int tabla[], int tamano) {
    double media = 0;
    for (int i = 0; i < tamano; i++) {
        media += tabla[i];
    }
    media = media / tamano;

    for (int i = 0; i < tamano; i++) {
        if (tabla[i] > media) {
            printf("\nElemento superior a la media: %d", tabla[i]);
        }
    }
}
