#include <stdio.h>

int division(int, int);

int main(void) {
    int numero1, numero2;
    printf("Introduce el dividendo y el divisor:\n");
    scanf("%d%d", &numero1, &numero2);
    printf("El cociente es: %d", division(numero1, numero2));
}

int division(int numero1, int numero2) {
    if (numero1 < numero2)
        return 0;
    return 1 + division(numero1 - numero2, numero2);
}