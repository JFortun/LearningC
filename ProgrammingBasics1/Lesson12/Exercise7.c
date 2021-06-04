#include <stdio.h>
#include <string.h>


int longitud(char cadena[100]);

int longitudSinEspacio(char cadena[100]);

int main() {
    char cadena[100];

    printf("Introduce una cadena\n");
    scanf("%s", cadena);

    printf("La longitud de la cadena introducida contando los espacios es %i\n", longitud(cadena));
    printf("La longitud de la cadena introducida sin contar los espacios es %i\n", longitudSinEspacio(cadena));

    return 0;
}

int longitud(char cadena[100]) {

    return strlen(cadena);
}

int longitudSinEspacio(char cadena[100]) {
    int i = 0, contador = 0;

    while (cadena[i] != '\0') {
        if (cadena[i] == ' ') {
            contador++;
        }
        i++;
    }

    return strlen(cadena) + contador;
}