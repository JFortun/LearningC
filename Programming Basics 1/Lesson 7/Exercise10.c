#include <stdio.h>
#include <stdbool.h>

bool comprobarFecha(int, int, int);

void main() {

    int dia, mes, ano;

    printf("Indique la fecha a comprobar:\n");

    do {
        printf("dia: ");
        scanf("%d", &dia);
    } while (dia < 1 || dia > 31);

    do {
        printf("mes: ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    do {
        printf("a%co: ", 164);
        scanf("%d", &ano);
    } while (ano < 1);

    printf("Validando la fecha introducida...\n");

    if (comprobarFecha(dia, mes, ano)) {
        printf("Fecha correcta");
    } else {
        printf("Fecha incorrecta");
    }
}

bool comprobarFecha(int dia, int mes, int ano) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 | mes == 12) {
        if (dia <= 31) {
            return (true);
        } else {
            return (false);
        }
    } else {
        if (mes == 2) {
            if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
                if (dia <= 29) {
                    return (true);
                } else {
                    return (false);
                }
            } else {
                if (dia <= 28) {
                    return (true);
                } else {
                    return (false);
                }
            }
        } else {
            if (dia <= 30) {
                return (true);
            } else {
                return (false);
            }
        }
    }
}