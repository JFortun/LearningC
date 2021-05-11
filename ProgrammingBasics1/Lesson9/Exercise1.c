#include <stdio.h>

void suma(float, float);

int main() {
    float dividendo, divisor;

    printf("Introduzca el dividendo:");
    scanf("%f", &dividendo);
    printf("Introduzca el divisor:");
    scanf("%f", &divisor);

    suma(dividendo, divisor);

    return 0;
}

void suma(float dividendo, float divisor) {

    printf("El resultado de la divisi%cn es: %f", 162, dividendo / divisor);
}