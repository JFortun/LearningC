#include <stdio.h>

int main() {
    int a, b;

    printf("Escribe dos n%cmeros:\n", 163);
    scanf("%d %d", &a, &b);

    if (a >= b) {
        printf("El primer n%cmero es mayor o igual que el segundo n%cmero. Se prodece a multiplicar.\n", 163, 163);
        int multiplicacion = a * b;
        printf("La multiplicaci%cn de los n%cmeros introducido es %d", 162, 163, multiplicacion);
    } else {
        printf("El primer n%cmero es menor que el segundo n%cmero. Se prodece a sumar.\n", 163, 163);
        int suma = a + b;
        printf("La suma de los n%cmeros introducido es %d", 163, suma);
    }

    return 0;
}