#include <stdio.h>

void suma(double, double);

void resta(double, double);

void producto(double, double);

void cociente(double, double);

int main() {
    double numero1, numero2;

    printf("Introduzca el primer n%cmero:", 163);
    scanf("%lf", &numero1);
    printf("Introduzca el segundo n%cmero:", 163);
    scanf("%lf", &numero2);

    suma(numero1, numero2);
    resta(numero1, numero2);
    producto(numero1, numero2);
    cociente(numero1, numero2);

    return 0;
}

void suma(double numero1, double numero2) {

    printf("El resultado de la suma es: %f\n", numero1 + numero2);
}

void resta(double numero1, double numero2) {

    printf("El resultado de la resta es: %f\n", numero1 - numero2);
}

void producto(double numero1, double numero2) {

    printf("El producto es: %f\n", numero1 * numero2);
}

void cociente(double numero1, double numero2) {

    printf("El cociente es: %f\n", numero1 / numero2);
}