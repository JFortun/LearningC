#include <stdio.h>

int cassini(int);

int main() {
    int numero;

    printf("Introduce un n%cmero para evaluar la identidad de Cassini (Fibonacci(n+1)*Fibonacci(n-1)-Fibonacci(n)2= -1n):\n", 163);
    scanf("%d", &numero);
    printf("\nCassini resulta: %d (Debe resultar siempre 1 o -1, independientemente del n%cmero introducido)", cassini(numero), 163);
    return 0;
}

int cassini(int numero) {
    return (numero & 1) ? -1 : 1; // Condicional ternario "Si a y b se cumplen -> c"
}