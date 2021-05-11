#include <stdio.h>
#include <math.h>

void potencia(double, double);

int main() {
    double base, exponente;

    printf("Introduzca la base:");
    scanf("%lf", &base);
    printf("Introduzca el exponente:");
    scanf("%lf", &exponente);

    potencia(base, exponente);

    return 0;
}

void potencia(double base, double exponente) {

    printf("El resultado de la potencia es: %f", pow(base, exponente));
}