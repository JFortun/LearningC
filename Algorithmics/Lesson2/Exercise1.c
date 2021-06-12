#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define true 1
#define false 0

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max) + 1;
}

int main() {

    Randomize();

    int i, j, aux, indiceMenor, salto, cambios, numero, tabla[1000], intercambio[1000], seleccion[1000], burbuja[1000], shell[1000];

    // Crear tabla
    for (i = 0; i <= 1000; i++) {
        tabla[i] = (Random(5000) - Random(5000));
    }

    // Recorrer tabla
    for (i = 0; i <= 1000; i++) {
        printf("\ntabla[%d] = %d ", i, tabla[i]);
    }

    // Buscar número en la tabla
    printf("\nEscribe un n%cmero a buscar en la tabla:", 163);
    scanf("%d", &numero);
    for (i = 0; i <= 1000; i++) {
        if (numero == tabla[i]) {
            printf("\nSe ha encontrado el n%cmero en la tabla[%d] = %d ", 163, i, tabla[i]);
        }
    }
    system("pause");

    // Copiar la tabla original
    memcpy(intercambio, tabla, sizeof(tabla));
    memcpy(seleccion, tabla, sizeof(tabla));
    memcpy(burbuja, tabla, sizeof(tabla));
    memcpy(shell, tabla, sizeof(tabla));

    printf("\nTabla ordenada con algoritmo de intercambio:");
    for (i = 0; i < 1000; i++) {
        j = i;
        aux = intercambio[i];
        while (j > 0 && aux < intercambio[j - 1]) {
            intercambio[j] = intercambio[j - 1];
            j--;
        }
        intercambio[j] = aux;
    }
    for (i = 0; i <= 1000; i++) {
        printf("%d, ", intercambio[i]);
    }
    system("pause");
    printf("\n");
    printf("\nTabla ordenada con algoritmo de selecci%cn:", 162);
    for (i = 0; i < 1000; i++) {
        indiceMenor = i;
        aux = seleccion[i];
        for (j = i + 1; j < 1000; j++) {
            if (seleccion[j] < seleccion[indiceMenor]) {
                indiceMenor = j;
            }
        }
        aux = seleccion[i];
        seleccion[i] = seleccion[indiceMenor];
        seleccion[indiceMenor] = aux;
    }
    for (i = 0; i <= 1000; i++) {
        printf("%d, ", seleccion[i]);
    }
    system("pause");
    printf("\n");
    printf("\nTabla ordenada con algoritmo de burbuja:");
    for (i = 0; i < 1000 - 1; i++) {
        for (j = 0; j < 1000 - i - 1; j++) {
            if (burbuja[j] > burbuja[j + 1]) {
                aux = burbuja[j];
                burbuja[j] = burbuja[j + 1];
                burbuja[j + 1] = aux;
            }
        }
    }
    for (i = 0; i <= 1000; i++) {
        printf("%d, ", burbuja[i]);
    }
    system("pause");
    printf("\n");
    printf("\nTabla ordenada con algoritmo shell:");
    for (salto = 1000 / 2; salto != 0; salto = salto / 2) {
        cambios = false;
        for (i = salto; i < 1000; i++) {
            if (shell[i - salto] > shell[i]) {
                aux = shell[i];
                shell[i] = shell[i - salto];
                shell[i - salto] = aux;
                cambios = true;
            }
        }
    }
    for (i = 0; i <= 1000; i++) {
        printf("%d, ", shell[i]);
    }

    // Busqueda binaria
    printf("\nEscribe un n%cmero a buscar en la tabla:", 163);
    scanf("%d", &numero);

    int primero = 0;
    int ultimo = 1000 - 1;
    int medio = (primero + ultimo) / 2;

    while (primero <= ultimo) {
        if (tabla[medio] < numero) {
            primero = medio + 1;
        } else if (tabla[medio] == numero) {
            printf("%d se ha encontrado en %d\n", numero, medio + 1);
            break;
        } else {
            ultimo = medio - 1;
        }
        medio = (primero + ultimo) / 2;
    }
    if (primero > ultimo) {
        printf("No se ha encontrado el n%cmero %d\n", 163, numero);
    }

    // Tiempo que tarda en buscar número
    clock_t t;
    t = clock();
    printf("\nEscribe un n%cmero a buscar en la tabla para medir el tiempo que tarda:", 163);
    scanf("%d", &numero);
    for (i = 0; i <= 1000; i++) {
        if (numero == tabla[i]) {
            printf("\nSe ha encontrado el n%cmero en la tabla[%d] = %d ", 163, i, tabla[i]);
        }
    }
    t = clock() - t;
    double tiempo = ((double) t) / CLOCKS_PER_SEC;
    printf("\nSe ha tardado %f segundos en buscar\n", tiempo);
    system("pause");

    // Busqueda binaria con contador de pasos y de tiempo
    t;
    t = clock();
    printf("\nEscribe un n%cmero a buscar en la tabla:", 163);
    scanf("%d", &numero);

    int contador = 0;

    primero = 0;
    ultimo = 1000 - 1;
    medio = (primero + ultimo) / 2;

    while (primero <= ultimo) {
        if (tabla[medio] < numero) {
            primero = medio + 1;
        } else if (tabla[medio] == numero) {
            printf("%d se ha encontrado en %d\n", numero, medio + 1);
            break;
        } else {
            ultimo = medio - 1;
        }
        medio = (primero + ultimo) / 2;
        contador++;

    }
    if (primero > ultimo) {
        printf("No se ha encontrado el n%cmero %d\n", 163, numero);
    }

    printf("Se han dado %d vueltas\n", contador);
    t = clock() - t;
    tiempo = ((double) t) / CLOCKS_PER_SEC;
    printf("\nSe ha tardado %f segundos en buscar\n", tiempo);


    return 0;
}