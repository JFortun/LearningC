#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];

    printf("Introduce dos cadenas\n");
    scanf("%s%s", cadena1, cadena2);

    printf("Las cadenas introducidas tras concatenarlas son: %s\n", strcat(cadena1, cadena2));

    return 0;
}