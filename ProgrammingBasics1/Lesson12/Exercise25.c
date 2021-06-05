#include <stdio.h>

int main() {

    char cadena[100];
    int i, j, longitud1, longitud2;

    printf("Introduce una cadena:");
    gets(cadena);

    for (longitud1 = 0; cadena[longitud1] != '\0'; longitud1++);

    longitud2 = 0;

    for (i = 0; i < (longitud1 - longitud2);) {
        if (cadena[i] == cadena[i + 1]) {
            for (j = i; j < (longitud1 - longitud2); j++)
                cadena[j + 1] = '*';
            longitud2++;
        } else {
            i++;
        }
    }

    printf("Cadena tras modificarse: %s\n", cadena);

    return 0;
}