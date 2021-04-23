#include <stdio.h>

int main() {
    double cantidadRepartir, cantidad1, cantidad2, cantidad3, calc;

    printf("Introduce la cantidad a repartir:\n");
    scanf("%lf", &cantidadRepartir);

    printf("Introduce las tres cantidades a las que se les va a repartir:\n");
    scanf("%lf%lf%lf", &cantidad1, &cantidad2, &cantidad3);

    calc = cantidadRepartir / (cantidad3 + cantidad2 + cantidad3);

    printf("A la primera cantidad le corresponde %lf, a la segunda %lf y a la tercera %lf", cantidad1 * calc, cantidad2 * calc, cantidad3 * calc);

    return 0;
}