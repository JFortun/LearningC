#include <stdio.h>

int main() {
    int contador;
    int producto = 0;
    int suma = 0;

    for (contador = 1; contador <= 20; contador++) {
        if (contador % 2 != 0) {
            producto += contador;
        }
    }

    for (contador = 1; contador <= 20; contador++) {
        if (contador % 2 == 0) {
            suma += contador;
        }
    }

    printf("\nLa suma de los 20 primeros n%cmeros pares es: %d\n", 163, suma);
    printf("\nEl producto de los 20 primeros n%cmeros impares es: %d", 163, producto);

    return 0;
}