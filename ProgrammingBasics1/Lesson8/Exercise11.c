#include <stdio.h>
#include <math.h>

int main() {
    int numero, raiz, modulo;

    do {
        printf("Indique una secuencia de n%cmeros para saber si son primos. Para terminar indique 0: \n", 163);
        scanf("%d", &numero);

        if (numero > 0) {
            modulo = numero % 2;
            raiz = sqrt(numero);
            while (modulo != 0 && 2 < raiz) {
                modulo = numero % (2 + 1);
            }
            if (modulo != 0) {
                printf("El n%cmero %d es primo\n", 163, numero);
            }
        }

    } while (numero != 0);

    return 0;
}