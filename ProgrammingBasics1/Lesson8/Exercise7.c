#include <stdio.h>

int main() {
    char letra = 0;

    while (letra != 'f') {
        printf("Escribe una letra:");
        scanf("%c", &letra);
        printf("\nLa letra introducida es: %c\n", letra);
    }

    printf("Fin del programa.");

    return 0;
}