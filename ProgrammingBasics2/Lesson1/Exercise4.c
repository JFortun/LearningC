#include <stdio.h>
#include <string.h>

int main() {
    char letra[5];
    FILE *file = fopen("fich2.txt", "w");

    do {
        printf("Introduce una letra:\n");
        scanf("%s", letra);
        if (strcmp(letra, "*") != 0) {
            fputs(letra, file);
            fputs("\n", file);
        }
    } while (strcmp(letra, "*") != 0);

    fclose(file);

    return 0;
}