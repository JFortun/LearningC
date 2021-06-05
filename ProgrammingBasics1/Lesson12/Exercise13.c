#include <stdio.h>

int main() {

    int i = 0;
    char cadena[50];

    printf("introduce una cadena:");
    scanf("%s", cadena);

    while (cadena[i] != '\0') {
        if (cadena[i] == 'a') {
            cadena[i] = 'o';
        }
        i++;
    }

    printf("\nCadena tras reemplazar las 'a' por 'o': %s", cadena);

    return 0;
}