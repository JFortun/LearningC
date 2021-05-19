#include <stdio.h>

float pendiente(float, float);

int main() {
    float x, y;

    printf("Introduzca el primer punto de la recta:");
    scanf("%f", &x);
    printf("Introduzca el segundo punto de la recta:");
    scanf("%f", &y);

    printf("La pendiente de la recta introducida es: %f", pendiente(x, y));

    return 0;
}

float pendiente(float x, float y) {

    float pendiente = ((y * 2) - y) / ((x * 2) - x);

    return pendiente;
}