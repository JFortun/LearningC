#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    printf("Escribe tres n%cmeros:\n", 163);
    scanf(" %d %d %d", &numero1, &numero2, &numero3);

    if (numero1 > numero2) {
        if (numero1 > numero3) {
            if (numero2 > numero3) {
                printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero1, numero2, numero3);
            } else {
                printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero1, numero3, numero2);
            }
        } else {
            printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero3, numero1, numero2);
        }
    } else {
        if (numero1 > numero3) {
            printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero2, numero1, numero3);
        } else {
            if (numero3 > numero2) {
                printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero3, numero2, numero1);
            } else {
                printf("Los valores ordenados de mayor a menor son: %d %d %d\n", numero2, numero3, numero1);
            }
        }
    }

    return 0;
}