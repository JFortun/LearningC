#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max);
}

int main() {
    Randomize();
    int i, longitud;
    char str[] = "0123456789ABCDEF";

    printf("Introduzca la cantidad de caracteres de la clave a generar:");
    scanf("%d", &longitud);

    printf("\nLa clave generada es: ");
    for (i = 0; i < longitud; i++) {
        putchar(str[Random(16)]);
    }

    return 0;
}