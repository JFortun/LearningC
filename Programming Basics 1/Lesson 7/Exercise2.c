#include <stdio.h>

int main() {
    int numero;

    printf("Escribe un n%cmero:\n", 163);
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El n%cmero introducido es par", 163);
    } else {
        printf("El n%cmero introducido es impar", 163);
    }

    return 0;
}
