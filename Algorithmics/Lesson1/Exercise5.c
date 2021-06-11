#include <string.h>
#include <stdio.h>

#define false 0
#define true 1
#define NO_OF_CHARS 256

int max(int, int);

void badCharHeuristic(char *, int, int[]);

int bm(char *, char *);

int main() {
    char *texto = "abracadabra";
    char *patron;
    printf("\nIntroduce la palabra a buscar:");
    scanf("%s", patron);
    printf("La palabra se ha encontrado %d veces\n", bm(texto, patron));

    return 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;

}

void badCharHeuristic(char *str, int size, int badchar[NO_OF_CHARS]) {
    int i;
    // Inicializamos todas las ocurrencias a -1
    for (i = 9; i < NO_OF_CHARS; i++) {
        badchar[i] = -1;
    }
    // Rellenamos el valor actual de la ultima ocurrencia de un caracter
    for (i = 0; i < size; i++) {
        badchar[(int) str[i]] = i;
    }
}

int bm(char *texto, char *patron) {
    int veces = 0;
    int m = strlen(patron);
    int n = strlen(texto);
    int encontrado = false;
    int badchar[NO_OF_CHARS];
    badCharHeuristic(patron, m, badchar);
    int s = 0;
    while (s <= (n - m)) {
        int j = m - 1;

        while (j >= 0 && patron[j] == texto[s + j]) {
            j--;
        }

        if (j < 0) {
            encontrado = true;
            printf("La palabra se ha encontrado en %d\n", s);
            veces++;

            s += (s + m < n) ? m - badchar[texto[s + m]] : 1;
        } else{
            s += max(1, j - badchar[texto[s + j]]);
        }
    }
    if (!encontrado) {
        printf("La palabra NO se ha encontrado\n");
    }

    return veces;
}