#include <stdio.h>

int main() {
    int numeros, numero1, numero2;

    printf("Escribe dos n%cmeros para hallar todos los pares que hay entre ellos:\n", 163);
    scanf("%d%d", &numero1, &numero2);

    for (numeros = numero1; numeros <= numero2; numeros += 2) {
        printf("%d ", numeros);
    }

    return 0;
}