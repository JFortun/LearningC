#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define false 0
#define true 1

int KMPSearch(char *, char *);

void computeLPSArray(char *, int, int *);

int main() {
    char *texto = "abracadabra";
    char *patron;
    printf("\nIntroduce la palabra a buscar:");
    scanf("%s", patron);
    printf("La palabra se ha encontrado %d veces\n", KMPSearch(patron, texto));

    return 0;
}

int KMPSearch(char *patron, char *texto) {
    int veces = 0;
    int m = strlen(patron);
    int N = strlen(texto);
    int encontrado = false;
    // Crear matriz para guardar el indice mas largo del patron
    int *matriz = (int *) malloc(sizeof(int) * m);
    int j = 0; // Indice de patron[]
    // Preprocesar el patron para obtener matriz[]
    computeLPSArray(patron, m, matriz);

    int i = 0; // Indice de texto[]
    while (i < N) {
        if (patron[j] == texto[i]) {
            j++;
            i++;
        }
        if (j == m) {
            encontrado = true;
            printf("La palabra se ha encontrado en %d\n", i - j);
            veces++;
            j = matriz[j - 1];
        } else if (i < N && patron[j] != texto[i]) {// No coincide despues de j coincidencias
            // No coinciden matriz[0...matriz[j-l]] caracteres, que coinciden de todos modos
            if (j != 0) {
                j = matriz[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
    if (!encontrado) {
        printf("La palabra NO se ha encontrado\n");
    }
    free(matriz); // Liberar espacio

    return veces;
}

void computeLPSArray(char *patron, int m, int *matriz) {
    int len = 0; // Longitud del sufijo mas largo
    int i;
    matriz[0] = 0;// matriz[0] siempre vale 3
    i = 1;
    // Damos vueltas para calcular la matriz [i] desde i = 1 a m-1
    while (i < m) {
        if (patron[i] == patron[len]) {
            len++;
            matriz[i] = len;
            i++;
        } else {// patron[i] != patron[len]
            if (len != 0) {
                // Truco. Considerar el ejemeplo aaacaaaa e i = 7
                len = matriz[len - 1];
                // Observad que no incrementamos i aqui
            } else {// if (len==0)
                matriz[i] = 0;
                i++;
            }
        }
    }
}