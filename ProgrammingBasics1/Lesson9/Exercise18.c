#include <stdio.h>

void tienda();

int main() {

    tienda();

    return 0;
}

void tienda() {
    float precioPieza = 1, tipoPieza, total = 0;
    char claseComprador;

    while (precioPieza != 0) {
        float descuento = 0;
        printf("\nIntroduce el precio de la pieza:");
        scanf("%f", &precioPieza);
        if (precioPieza != 0) {
            printf("\nIntroduce la clase del comprado (A, B o C):");
            scanf("%s", &claseComprador);
            printf("\nIntroduce el tipo de la pieza (1 o 2):");
            scanf("%f", &tipoPieza);

            if (claseComprador == 'A') {
                descuento += (2 * precioPieza) / 100;
            } else if (claseComprador == 'B') {
                descuento += (4 * precioPieza) / 100;
            } else if (claseComprador == 'C') {
                descuento += (6 * precioPieza) / 100;
            } else if (tipoPieza == 1) {
                descuento += (8 * precioPieza) / 100;
            } else if (tipoPieza == 2) {
                descuento += (10 * precioPieza) / 100;
            }

            printf("\nEl descuento es de %.2f euros, por lo que el precio final de la pieza es %.2f euros", descuento,
                   precioPieza - descuento);
            total += precioPieza - descuento;

        }

    }

    printf("Compra finalizada, el precio total es: %.2f", total);
}
