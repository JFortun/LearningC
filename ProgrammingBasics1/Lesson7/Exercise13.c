#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Introduce una letra a convertir en may%csculas\n", 163);
    scanf(" %c", &letra);

    printf("%c en may%csculas es %c", letra, 163, toupper(letra));

    return 0;
}