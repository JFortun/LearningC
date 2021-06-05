#include <stdio.h>
#include <string.h>

int main() {

    char cadena[100], cadenaAux[10][10];
    int i, j, ctr;

    printf("Introduce una cadena:");
    fgets(cadena, sizeof cadena, stdin);

    j = 0;
    ctr = 0;
    for (i = 0; i <= (strlen(cadena)); i++) {

        if (cadena[i] == ' ' || cadena[i] == '\0') {
            cadenaAux[ctr][j] = '\0';
            ctr++;
            j = 0;
        } else {
            cadenaAux[ctr][j] = cadena[i];
            j++;
        }
    }

    printf("\nLas letras por separado son:\n");
    for (i = 0; i < ctr; i++) {
        printf(" %s\n", cadenaAux[i]);
    }

    return 0;
}