#include <stdio.h>

int main() {
    char str[100];
    int letras, cifras, i;
    letras = cifras = i = 0;


    printf("Introduce una cadena:");
    fgets(str, sizeof str, stdin);


    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letras++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            cifras++;
        }

        i++;
    }

    printf("La cantidad de letras en la cadena introducida es:%d\n", letras);
    printf("La cantidad de cifras en la cadena introducida es:%d\n", cifras);

    return 0;
}