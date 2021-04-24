#include <stdio.h>

int main() {
    int aux, numero1, numero2;

    printf("Escribe un primer n%cmero:\n", 163);
    scanf( "%d", &numero1 );
    printf("Escribe un segundo n%cmero:\n", 163);
    scanf( "%d", &numero2 );

    printf( "Los valores se han intercambiado\n" );

    aux = numero1;
    numero1 = numero2;
    numero2 = aux;

    printf("El valor del primer n%cmero ha cambiado a %d\n", 163, numero1 );
    printf("El valor del segundo n%cmero ha cambiado a %d\n", 163, numero2 );
    return 0;
}