#include<stdio.h>

int main() {
    char cadena[50];
    int i = 0, j, chk;

    printf("Introduce una cadena: ");
    gets(cadena);

    while (cadena[i] != '\0') {
        chk = 0;
        if (cadena[i] == ' ') {
            j = i;
            while (cadena[j - 1] != '\0') {
                cadena[j] = cadena[j + 1];
                j++;
            }
            chk = 1;
        }
        if (chk == 0)
            i++;
    }

    printf("\nCadena sin espacios: %s", cadena);

    return 0;
}