#include <stdio.h>

int edadSegundosFuncion(int);

void edadSegundosProcedimiento(int);

int main() {
    int edad;

    printf("Introduzca la edad:");
    scanf("%d", &edad);

    printf("La edad en segundos es: %d\n", edadSegundosFuncion(edad));
    edadSegundosProcedimiento(edad);

    return 0;
}

int edadSegundosFuncion(int edad) {

    int segundos = edad * 31536000;

    return segundos;
}

void edadSegundosProcedimiento(int edad) {

    printf("La edad en segundos es: %d", edad * 31536000);
}