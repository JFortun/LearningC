#include <stdio.h>

int main() {

    int a, mes, dia, i, transcurridos = 0, restantes;
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Indica el n%cmero correspondiente al d%ca (DD):\n", 163, 161);
    scanf("%dia", &dia);

    printf("Indica el n%cmero correspondiente al mes (MM):\n", 163);
    scanf("%dia", &mes);

    printf("Indica el n%cmero correspondiente al a%co (AAAA):\n", 163, 164);
    scanf("%d", &a);

    for (i = 0; i < mes - 1; i++) {
        transcurridos += dias[i];
    }
    transcurridos += dia;
    restantes = 365 - transcurridos;

    printf("D%cas restantes: %d", 161, restantes);

    return 0;
}