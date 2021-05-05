#include <stdio.h>
#include <time.h>

int main() {
    int veces, i;

    printf("Introduzca la cantidad de veces que se va a iterar en el bucle:");
    scanf("%d", &veces);

    clock_t start = clock();
    for (i = 1; i <= veces; i++) {
        printf("Iteraci%cn %i\n", 162, i);
    }
    clock_t end = clock();
    float seconds = (float) (end - start) / CLOCKS_PER_SEC;
    printf("Se ha tardado %f segundos en iterar el bucle de tama%co %i", seconds, 164, veces);


    return 0;
}