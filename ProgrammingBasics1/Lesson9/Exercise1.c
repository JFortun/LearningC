#include <stdio.h>

void division(float, float);

int main() {
    float dividendo, divisor;

    printf("Introduzca el dividendo:");
    scanf("%f", &dividendo);
    printf("Introduzca el divisor:");
    scanf("%f", &divisor);

    division(dividendo, divisor);

    return 0;
}

void division(float dividendo, float divisor) {

    printf("El resultado de la divisi%cn es: %f", 162, dividendo / divisor);
}