#include<stdio.h>

int main() {
    float a, b, c;
    float raiz1, raiz2, calc;

    printf("Introduce los valores a, b y c del polinomio de segundo grado:\n");
    scanf("%f%f%f", &a, &b, &c);

    raiz1 = -b / (2 * a);
    calc = ((b * b) - (4 * a * c) * -1);
    raiz2 = (calc) / (2 * a);
    printf("Las ra%cces son numeros complejos\n", 161);
    printf("Las ra%cces del polinomio de segundo grado son: ", 161);
    printf("%.3f%+.3fi", raiz1, (raiz2 * -1));
    printf(" y %.3f%+.3fi", raiz1, raiz2);

    return 0;
}