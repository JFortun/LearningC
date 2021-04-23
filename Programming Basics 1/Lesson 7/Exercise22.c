#include <stdio.h>

int main() {
    int ano, a, b, c, d, e, dia;

    printf("Indique el a%co en el que quiere calcular la fecha del Domingo de Ramos: \n", 164);
    scanf("%d", &ano);

    a = ano % 19;
    b = ano % 4;
    c = ano % 7;
    d = (19 * a + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;

    dia = 22 + d + e;

    printf("La fecha del Domingo de Ramos de %d es: ", ano);

    if (dia <= 31) {
        printf("%d de Marzo ", dia);
    } else {
        printf("%d de Abril ", dia - 31);
    }

    return 0;
}