#include <stdio.h>
#include <math.h>

int main() {
    double v, r;
    double pi = 3.141592653589793;

    printf("Introduce el radio de la esfera para calcular su volumen:\n");
    scanf("%lf", &r);

    v = 1.33 * pi * pow(r, 3);

    printf("El volumen de la esfera es %lf metros c%cbicos", v, 163);

    return 0;
}