#include <stdio.h>

int cuadrante(float, float);

int main() {
    float x, y;

    printf("Introduzca la x:");
    scanf("%f", &x);
    printf("Introduzca la y:");
    scanf("%f", &y);

    printf("El cuadrante al que pertenecen los puntos introducidos es el: %d", cuadrante(x, y));

    return 0;
}

int cuadrante(float x, float y) {

    int cuadrante = 0;

    if (x >= 0 && y >= 0) {
        cuadrante = 1;
    } else if (x < 0 && y >= 0) {
        cuadrante = 2;
    } else if (x < 0 && y < 0) {
        cuadrante = 3;
    } else if (x >= 0 && y < 0) {
        cuadrante = 4;
    }

    return cuadrante;
}