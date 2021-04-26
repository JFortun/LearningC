#include <stdio.h>

int main() {
    char linea[6] = "-----";

    for (int i = 0; i <= 4; ++i) {
        linea[i] = '*';
        printf("%s\n", linea);
        linea[i] = '-';
    }

    return 0;
}