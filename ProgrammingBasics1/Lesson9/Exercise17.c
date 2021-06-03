#include <stdio.h>

void sonPrimos();

int main() {

    sonPrimos();

    return 0;
}

void sonPrimos() {
    int numero1, numero2;

    printf("Introduce un n%cmero:\n", 163);
    scanf("%d", &numero1);
    printf("Introduce otro n%cmero:\n", 163);
    scanf("%d", &numero2);

    int resto;
    while (numero2 != 0) {
        resto = numero1 % numero2;
        numero1 = numero2;
        numero2 = resto;
    }
    if (numero1 == 1 || numero1 == -1) {
        printf("Son primos\n");
    } else {
        printf("No son primos\n");
    }
}