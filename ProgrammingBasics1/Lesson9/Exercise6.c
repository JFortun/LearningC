#include <stdio.h>

double suma(double, double, double);

void producto(double, double, double);

void media(double, double, double);

int main() {
    double numero1, numero2, numero3;

    printf("Introduzca el primer n%cmero:", 163);
    scanf("%lf", &numero1);
    printf("Introduzca el segundo n%cmero:", 163);
    scanf("%lf", &numero2);
    printf("Introduzca el tercer n%cmero:", 163);
    scanf("%lf", &numero3);

    printf("La suma es: %f\n", suma(numero1, numero2, numero3));
    producto(numero1, numero2, numero3);
    media(numero1, numero2, numero3);

    return 0;
}

double suma(double numero1, double numero2, double numero3) {

    return numero1 + numero2 + numero3;
}

void producto(double numero1, double numero2, double numero3) {

    printf("El producto es: %f\n", numero1 * numero2 * numero3);
}

void media(double numero1, double numero2, double numero3) {

    printf("La media es: %f\n", suma(numero1, numero2, numero3) / 3);
}