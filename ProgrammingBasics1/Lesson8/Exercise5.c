#include <stdio.h>

int main() {
    int i, numero;

    printf("Escribe un n%cmero para ver su tabla de multiplicar:\n", 163);
    scanf("%d", &numero);

    for (i = 0; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}