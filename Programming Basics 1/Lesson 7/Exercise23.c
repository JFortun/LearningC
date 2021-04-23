#include <stdio.h>

int main() {
    double radio, altura;
    double pi = 3.141592653589793;

    printf("Introduce el radio y la altura del cilindro para calcular su %crea lateral y su volumen:\n", 160);
    scanf("%lf%lf", &radio, &altura);

    printf("El %crea lateral del cilindro es %lf\n", 160, (2 * pi) * radio * altura);

    printf("El volumen del cilindro es %lf", pi * (radio * radio) * altura);

    return 0;
}