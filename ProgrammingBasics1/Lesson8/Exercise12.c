#include <stdio.h>

int main() {
    int euros, b500, b200, b100, b50, b20, b10, b5, m2, m1;

    printf("Introduzca la cantidad entera en euros: \n");
    scanf("%d", &euros);

    if (euros > 0) {
        if (euros >= 500) {
            b500 = euros / 500;
            euros %= 500;
        } else {
            b500 = 0;
        }

        if (euros >= 200) {
            b200 = euros / 200;
            euros %= 200;
        } else {
            b200 = 0;
        }

        if (euros >= 100) {
            b100 = euros / 100;
            euros %= 100;
        } else {
            b100 = 0;
        }

        if (euros >= 50) {
            b50 = euros / 50;
            euros %= 50;
        } else {
            b50 = 0;
        }

        if (euros >= 20) {
            b20 = euros / 20;
            euros %= 20;
        } else {
            b20 = 0;
        }

        if (euros >= 10) {
            b10 = euros / 10;
            euros %= 10;
        } else {
            b10 = 0;
        }

        if (euros >= 5) {
            b5 = euros / 5;
            euros %= 5;
        } else {
            b5 = 0;
        }

        if (euros >= 2) {
            m2 = euros / 2;
            euros %= 2;
        } else {
            m2 = 0;
        }

        m1 = euros;

        printf("%d billetes de 500\n", b500);
        printf("%d billetes de 200\n", b200);
        printf("%d billetes de 100\n", b100);
        printf("%d billetes de 50\n", b50);
        printf("%d billetes de 20\n", b20);
        printf("%d billetes de 10\n", b10);
        printf("%d billetes de 5\n", b5);
        printf("%d monedas de 2\n", m2);
        printf("%d monedas de 1\n", m1);
    } else
        printf("La cantidad debe ser positiva");

    return 0;
}