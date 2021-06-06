#include <stdio.h>

int main() {
    char cadena[100];
    FILE *file = fopen("fich1.txt", "w");

    printf("Introduce una cadena:\n");
    scanf("%s", cadena);

    fputs(cadena, file);

    fclose(file);

    return 0;
}