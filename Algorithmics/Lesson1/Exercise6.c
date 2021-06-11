#include <stdio.h> // Incluyo una libreria
#include <stdlib.h> // Incluyo una libreria
#include <string.h> // Incluyo una libreria
#include <time.h> // Incluyo una libreria

#define MAXT 1001 // Declaro las constantes
#define MAXP 1000 // Declaro las constantes

void preBMBc(char *P, int m, int tabla[]); // Declaro las funciones

void BMH(char *T, int n, char *P, int m, int *, int *); // Declaro las funciones

int main() { // Funcion principal que inicia el programa
    char texto[MAXT]; // Declaro la variable char pasandole como parametro la constante
    char patron[MAXP]; // Declaro la variable char pasandole como parametro la constante
    int rep; // Numero de veces encontrado
    int comp; // Numero de comparaciones
    system("color 0B"); // Cambio el color del texto de la consola

    // Variables para calcular el tiempo de búsqueda
    float t1, t2, tiempo;
    rep = 0;

    printf("Ingrese el Texto:"); // Pido al usuario el dato que necesito
    scanf("ts", texto); // Pido al usuario el dato que necesito

    printf("Ingrese el Patr%cn:", 162); // Pido al usuario el dato que necesito
    scanf("%s", patron); // Pido al usuario el dato que necesito

    int n = strlen(texto); // Consigo la longitud del array de caracteres
    int m = strlen(patron); // Consigo la longitud del array de caracteres

    t1 = clock(); // Guardo el tiempo en una variable
    BMH(texto, n, patron, m, &rep, &comp); // Llamo a la funcion BMH
    t2 = clock(); // Guardo el tiempo en una variable

    tiempo = (t2 - t1) / 100000; // Resto los tiempos y los divido
    printf(" >> Tiempo de busqueda : %g\n", tiempo); // Muestro el tiempo
    if (rep == 0) { // Condicional: si las repeticiones son 0
        printf(">>Patr%cn no encontrado ..!\n", 162); // Muestro el mensaje
    } else { // Condicional si no
        printf(">>Ocurrencias: %d\n", rep); // Muestro el numero de repeticiones
    }
    printf(">>Comparaciones: %d\n", comp); // Muestro el numero de comparaciones

    system("pause"); // Hago una pausa hasta que se pulse una tecla

    return 0; // Devuelvo 0 y finalizo el programa
}

void preBMBc(char *patron, int m, int tabla[]) { // Creo la funcion
    int i; // Declaro la variable
    for (i = 0; i < 256; ++i) { // Bucle para rellenar la tabla
        tabla[i] = m; // Relleno la tabla con m
    }

    for (i = 0; i < m - 1; ++i) { // Bucle para recorrer la tabla
        tabla[patron[i]] = m - i - 1; // Recorre la tabla restando -i -1 a m
    }
}

void BMH(char *texto, int n, char *patron, int m, int *rep, int *comp) { // Creo la funcion
    int j, bmBC[256]; // Declaro las variables y la tabla de la funcion
    char c; // Declaro la variable de tipo char

    preBMBc(patron, m, bmBC); // Preprocesamiento
    // Busqueda
    j = 0; // Inicializo j a 0
    while (j <= n - m) { // Bucle mientras que j sea menor o igual a n-m
        c = texto[j + m - 1]; // Asocio la variable c con la tabla texto
        if (patron[m - 1] == c && memcmp(patron, texto + j, m - 1) == 0) { // bucle para buscar la palabra
            printf("La palabra se ha encontrado en %d\n", j + 1); // Muestro donde se ha encontrado
            (*rep)++; // Avanzo el puntero de repeticiones
        }
        j = j + bmBC[c]; // Asocio j a j + resultado de la funcion bnmBC[c]
        (*comp)++; // Avanzo el puntero de comparaciones
    }
}