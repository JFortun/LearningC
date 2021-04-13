#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Indica un caracter: ");
    scanf("%c", &letra);

    if (letra >= 'a' && letra <= 'z') {
        printf("Es min%cscula\n", 163);
    } else if (letra >= 'A' && letra <= 'Z') {
        printf("Es may%cscula\n", 163);
    } else if (isdigit(letra)) {
        printf("Es un d%cgito\n", 161);
    } else {
        printf("Es un s%cmbolo\n", 161);
    }

    return 0;
}