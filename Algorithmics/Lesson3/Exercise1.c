#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max) + 1;
}

int main() {
    Randomize();

    char aux[0];
    char linea[100];
    char linea1[10] = {"000000000"};
    char linea2[10] = {"000000000"};
    char linea3[10] = {"000000000"};
    char linea4[10] = {"000000000"};
    char linea5[10] = {"000000000"};
    char linea6[10] = {"000000000"};
    char linea7[10] = {"000000000"};
    char linea8[10] = {"000000000"};
    char linea9[10] = {"000000000"};

    itoa(Random(9), aux, 10);
    linea1[0] = aux[0];
    itoa(Random(9), aux, 10);
    linea2[4] = aux[0];
    itoa(Random(9), aux, 10);
    linea3[8] = aux[0];
    itoa(Random(9), aux, 10);
    linea4[2] = aux[0];
    itoa(Random(9), aux, 10);
    linea5[5] = aux[0];
    itoa(Random(9), aux, 10);
    linea6[6] = aux[0];
    itoa(Random(9), aux, 10);
    linea7[1] = aux[0];
    itoa(Random(9), aux, 10);
    linea8[3] = aux[0];
    itoa(Random(9), aux, 10);
    linea9[7] = aux[0];

    FILE *sudoku = fopen("tablero.DAT", "wt");

    linea[0] = 0;
    strcat(linea, linea1);
    strcat(linea, "\n");
    strcat(linea, linea2);
    strcat(linea, "\n");
    strcat(linea, linea3);
    strcat(linea, "\n");
    strcat(linea, linea4);
    strcat(linea, "\n");
    strcat(linea, linea5);
    strcat(linea, "\n");
    strcat(linea, linea6);
    strcat(linea, "\n");
    strcat(linea, linea7);
    strcat(linea, "\n");
    strcat(linea, linea8);
    strcat(linea, "\n");
    strcat(linea, linea9);

    fprintf(sudoku, "%s\n", linea);
    fclose(sudoku);

    return 0;
}