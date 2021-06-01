#include <stdio.h>

#define EUROPESETA 166.386
#define PESETAEURO 0.006

float pesetaAEuro();

float euroAPeseta();

int main() {

    int opcion;
    float x;
    for (;;) {
        printf("----------Conversi%cn pesetas - euros----------\n", 162);
        printf("1 Pesetas a euros\n");
        printf("2 Euros a pesetas\n");
        printf("3 Salir\n");
        printf("Elige tu opci%cn:\n", 162);
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                x = pesetaAEuro();
                printf("Las pesetas introducidas equivalen a %.3f euros\n", x);
                break;
            case 2:
                x = euroAPeseta();
                printf("Los euros introducidos equivalen a %.3f pesetas\n", x);
                break;
            case 3:
                break;
            default:
                printf("Opci%cn incorrecta\n", 162);
        }
        if (opcion == 3) {
            break;
        }
    }

    return 0;
}

float pesetaAEuro() {
    float pesetas;
    printf("Introduce las pesetas:\n");
    scanf("%f", &pesetas);
    return pesetas * PESETAEURO;
}

float euroAPeseta() {
    float euros;
    printf("Introduce los euros:\n");
    scanf("%f", &euros);
    return euros * EUROPESETA;
}