#include <stdio.h>

int main() {
    float c, r, t;

    printf("Introduce el capital, el inter%cs y los d%cas para calcular los intereses producidos:\n", 130, 161);
    scanf("%f%f%f", &c, &r, &t);

    printf("El inter%cs producido es %f", 130, (c * r * t) / 36000);

    return 0;
}