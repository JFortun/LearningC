#include <stdio.h>

int main() {
    int dia, mes, ano, aux, resto, tarot;

    printf("Indica tu fecha de nacimiento para calcular tu n%cmero de Tarot\n", 163);
    do {
        printf("D%ca: ", 161);
        scanf("%d", &dia);
    } while (dia < 1 || dia > 31);

    do {
        printf("Mes: ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    do {
        printf("A%co: ", 164);
        scanf("%d", &ano);
    } while (ano < 0 || ano > 9000);

    tarot = dia + mes + ano;
    while (tarot > 9) {
        aux = tarot;
        tarot = 0;
        do {
            resto = aux % 10;
            tarot += resto;
            aux = aux / 10;
        } while (aux != 0);
    }

    printf("Tu n%cmero de Tarot es: %d", 163, tarot);

    return 0;
}