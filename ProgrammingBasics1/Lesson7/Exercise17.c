#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    float x, raiz1, raiz2;

    printf("Introduce los valores a, b y c del polinomio de segundo grado:\n");
    scanf("%f%f%f", &a, &b, &c);

    x = b * b - 4 * a * c;

    if (x < 0) {
        printf("Las ra%cces son numeros complejos\n", 161);
        printf("Las ra%cces del polinomio de segundo grado son: ", 161);
        printf("%.3f%+.3fi", -b / (2 * a), sqrt(-x) / (2 * a));
        printf(" y %.3f%+.3fi", -b / (2 * a), -sqrt(-x) / (2 * a));

    } else if (x == 0) {
        printf("Ambas ra%cces son iguales\n", 161);
        raiz1 = -b / (2 * a);
        printf("La ra%cz del polinomio de segundo grado es: %.3f ", 161, raiz1);

    } else {
        printf("Las ra%cces son numeros reales\n", 161);
        raiz1 = (-b + sqrt(x)) / (2 * a);
        raiz2 = (-b - sqrt(x)) / (2 * a);
        printf("Las ra%cces del polinomio de segundo grado son: %.3f y %.3f", 161, raiz1, raiz2);
    }

    return 0;
}