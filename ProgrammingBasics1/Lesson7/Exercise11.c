#include <stdio.h>

int comprobarFecha(int, int);

int main() {

    int mes, ano;

    printf("Indique la fecha a comprobar:\n");

    do {
        printf("mes: ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    do {
        printf("a%co: ", 164);
        scanf("%d", &ano);
    } while (ano < 1);

    printf("El n%cmero de d%cas de la fecha indicada es %d", 163, 161, comprobarFecha(mes, ano));

    return 0;
}

int comprobarFecha(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
            return (29);
        } else {
            return (28);
        }
    } else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 | mes == 12) {
            return (31);
        } else {
            return (30);
        }
    }
}