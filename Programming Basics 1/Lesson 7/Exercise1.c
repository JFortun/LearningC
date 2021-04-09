#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Escribe dos n%cmeros enteros:\n", 163);
    scanf("%d %d", &numero1, &numero2);

    int suma = numero1 + numero2;

    printf("La suma de los n%cmeros introducido es %d", 163, suma);
    return 0;
}
