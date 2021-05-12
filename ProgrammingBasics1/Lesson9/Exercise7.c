#include <stdio.h>

int suma();

int main() {

    printf("La suma de los cuadrados de los 100 primeros n%cmeros es: %d", 163, suma());
    return 0;
}

int suma() {

    int suma = 0;

    for (int i = 1; i <= 100; i++) {
        suma = suma + (i * i);
    }

    return suma;
}