#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\n* Men%c *\n", 163);
        printf("1 - Abrir\n");
        printf("2 - Cerrar\n");
        printf("3 - Modificar\n");
        printf("4 - Salir\n");
        printf("Escribe una opci%cn del men%c:\n", 162, 163);
        scanf("%d", &opcion);
    } while (opcion != 4);

    return 0;
}