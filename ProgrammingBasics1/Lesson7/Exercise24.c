#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, calc;

    printf("Introduce las coordenadas x e y del primer punto:\n");
    scanf("%lf%lf", &x1, &y1);

    printf("Introduce las coordenadas x e y del segundo punto:\n");
    scanf("%lf%lf", &x2, &y2);

    calc = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    printf("La distancia entre los dos puntos introducidos es %lf", sqrt(calc));

    return 0;
}