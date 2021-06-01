#include <stdio.h>
#include <math.h>

float seno();

float coseno();

float tangente();

int main() {

    int opcion;
    float x;
    for (;;) {
        printf("----------Calculadora trigonom%ctrica----------\n", 130);
        printf("1 Seno\n");
        printf("2 Coseno\n");
        printf("3 Tangente\n");
        printf("4 Salir\n");
        printf("Elige tu opci%cn:\n", 162);
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                x = seno();
                printf("El seno de los radianes introducidos es %.5f\n", x);
                break;
            case 2:
                x = coseno();
                printf("El coseno de los radianes introducidos es %.5f\n", x);
                break;
            case 3:
                x = tangente();
                printf("La tangente de los radianes introducidos es %.5f\n", x);
                break;
            case 4:
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

float seno() {
    float radianes;
    printf("Introduce los radianes:\n");
    scanf("%f", &radianes);
    return sinf(radianes);
}

float coseno() {
    float radianes;
    printf("Introduce los radianes:\n");
    scanf("%f", &radianes);
    return cosf(radianes);
}

float tangente() {
    float radianes;
    printf("Introduce los radianes:\n");
    scanf("%f", &radianes);
    return tanf(radianes);
}
