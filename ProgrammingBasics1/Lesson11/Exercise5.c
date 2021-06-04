#include <stdio.h>

int main() {
    int numero, cuadrados[10];

    printf("\nEscribe un n%cmero:", 163);
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        cuadrados[i] = (numero + i) * (numero + i);
    }

    for (int i = 0; i <= 10; i++) {
        printf("\ncuadrados[%d] = %d ", i, cuadrados[i]);
    }

    return 0;
}
