#include <stdio.h>

void funcion(double, double, double);

int main() {
    double a, b, c;

    printf("Introduzca el valor de a:");
    scanf("%lf", &a);
    printf("Introduzca el valor de b:");
    scanf("%lf", &b);
    printf("Introduzca el valor de c:");
    scanf("%lf", &c);

    funcion(a, b, c);

    return 0;
}

void funcion(double a, double b, double c) {

    double resultado = ((b * b) - (4 * a * c)) / (2 * a);
    printf("El resultado de la potencia es: %f", resultado);
}