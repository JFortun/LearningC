#include <stdio.h>

int potencia(int n1, int aexponente);

int main() {
    int base, exponente, resultado;
    printf("Indica la base:");
    scanf("%d", &base);
    printf("\nIndica el exponente:");
    scanf("%d", &exponente);
    resultado = potencia(base, exponente);
    printf("\n%d^%d = %d", base, exponente, resultado);
    return 0;
}

int potencia(int base, int exponente) {
    if (exponente != 0) {
        return (base * potencia(base, exponente - 1));
    } else {
        return 1;
    }
}