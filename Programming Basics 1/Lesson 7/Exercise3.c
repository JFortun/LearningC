#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Escribe dos n%cmeros:\n", 163);
    scanf("%d %d", &numero1, &numero2);

    if (numero1 == numero2) {
        printf("Los n%cmeros son iguales", 163);
    } else if (numero1 > numero2) {
        printf("El primer n%cmero es mayor que el segundo n%cmero", 163, 163);
    } else {
        printf("El segundo n%cmero es mayor que el primer n%cmero", 163, 163);
    }

    return 0;
}