#include <stdio.h>

int main() {

    int i, posiciones, opcion;
    char cadena[100];

    printf("\nIntroduce una cadena:");
    gets(cadena);
    printf("Escribe un n%cmero para usar de clave:\n", 163);
    scanf("%d", &posiciones);

    printf("Selecciona una de las siguientes opciones:\n");
    printf("1. Encriptar la cadena\n");
    printf("2. Desencriptar la cadena\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            for (i = 0; (i < 100 && cadena[i] != '\0'); i++)
                cadena[i] = cadena[i] + posiciones;

            printf("La cadena encriptada es: %s\n", cadena);
            break;

        case 2:
            for (i = 0; (i < 100 && cadena[i] != '\0'); i++)
                cadena[i] = cadena[i] - posiciones;

            printf("La cadena desencriptada es: %s\n", cadena);
            break;
    }

    return 0;
}