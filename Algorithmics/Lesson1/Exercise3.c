#include <stdio.h>
#include <string.h>

#define false 0
#define true 1

int brute_force(char[255], char[10]);

int main() {
    char texto[255] = "Esta es la cadena donde se busca", patron[10];
    int veces = 0;

    printf("\nIntroduce la palabra a buscar:");
    scanf("%s", patron);

    if (brute_force(texto, patron) == true) {
        veces++;
    } else {
        printf("\nLa palabra NO se ha encontrado");
    }
    printf("\nEl elemento a buscar se ha encontrado %d veces\n", veces);

    return 0;
}

int brute_force(char texto[255], char patron[10]) {
    int n = strlen(texto);
    int m = strlen(patron);
    int encontrado = false;
    int i, j;
    int match;
    for (i = 0; i < n; i++) {
        match = 0;
        for (j = 0; j < m; j++) {
            if (texto[i] == patron[j]) {
                match++;
                i++;
            } else {
                j = m; // Para salir del bucle
            }
            if (match == m) {
                encontrado = true;
                printf("La palabra se ha encontrado en la posici%cn: %d (%cltimo caracter)", 162, i, 163);
            }
        }
    }

    return (encontrado);
}