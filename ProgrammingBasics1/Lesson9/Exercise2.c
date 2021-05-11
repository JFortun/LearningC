#include <stdio.h>

void suma(int, int);

int main() {
    int sumando1, sumando2;

    printf("Introduzca el primer sumando:");
    scanf("%d", &sumando1);
    printf("Introduzca el segundo sumando:");
    scanf("%d", &sumando2);

    suma(sumando1, sumando2);

    return 0;
}

void suma(int sumando1, int sumando2) {

    printf("El resultado de la suma es: %d", sumando1 + sumando2);
}