#include <stdio.h>

int main() {
    int i, veces, numero;

    printf("Escribe dos n%cmeros, el primero indica la cantidad de veces que se imprime el segundo:\n", 163);
    scanf("%d%d", &veces, &numero);

    for (i = 0; i < veces; ++i) {
        printf("%d ", numero);
    }

    return 0;
}