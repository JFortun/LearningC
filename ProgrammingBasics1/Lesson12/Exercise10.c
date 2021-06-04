#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    char cadena[50], cadenaMod[50] = "";

    printf("Escribe un n%cmero desde el que copiar:\n", 163);
    scanf("%d", &numero);
    printf("Introduce una cadena\n");
    scanf("%s", cadena);

    strncat(cadenaMod, cadena, numero);

    printf("Cadena original: %s\n", cadena);
    printf("Cadena final: %s", cadenaMod);

    return 0;
}