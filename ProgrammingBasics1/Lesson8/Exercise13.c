#include <math.h>
#include <stdio.h>

int maximoComunDivisor(int a, int b) {
    int mcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}

int descomposicion(int *a, int *b) {
    for (int i = 2; i <= *a && i <= *b; i++) {
        if (*a % i == 0 && *b % i == 0) {
            *a = *a / i;
            *b = *b / i;
        }
    }
    return 0;
}

int main() {
    double numero;

    printf("Indique un n%cmero decimal para hallar su fracci%cn: \n", 163, 162);
    scanf("%lf", &numero);

    int precision = 10000;
    double b = (numero - floor(numero)) * precision;
    int d = (int) floor(numero) * precision + (int) (b + .5f);

    while (1) {
        if (d % 10 == 0) {
            d = d / 10;
            precision = precision / 10;
        } else {
            break;
        }
    }

    int *i = &d;
    int *j = &precision;
    int t = 0;
    while (t != 1) {
        int mcd = maximoComunDivisor(d, precision);
        if (mcd == 1) {
            printf("%d/%d\n", d, precision);
            t = 1;
        } else {
            descomposicion(i, j);
        }
    }

    return 0;
}