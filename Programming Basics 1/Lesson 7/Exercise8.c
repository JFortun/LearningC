#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Escribe dos n%cmeros:\n", 163);
    scanf("%d %d", &numero1, &numero2);

    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int producto = numero1 * numero2;
    int cociente = numero1 / numero2;

    printf("La suma de los n%cmeros introducido es %d\n", 163, suma);
    printf("La resta de los n%cmeros introducido es %d\n", 163, resta);
    printf("El producto de los n%cmeros introducido es %d\n", 163, producto);
    printf("El cociente de los n%cmeros introducido es %d\n", 163, cociente);

    return 0;
}