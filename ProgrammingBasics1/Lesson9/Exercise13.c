#include <stdio.h>

#define PI 3.14159265358979323846

float gradosARadianes();

float radianesAGrados();

int main() {

    int opcion;
    float x;
    for (;;) {
        printf("----------Conversi%cn grados - radianes----------\n", 162);
        printf("1 Grados a radianes\n", 161);
        printf("2 Radianes a grados\n", 161);
        printf("3 Salir\n");
        printf("Elige tu opci%cn:\n", 162);
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                x = gradosARadianes();
                printf("Los grados introducidos equivalen a %.2f radianes\n", x);
                break;
            case 2:
                x = radianesAGrados();
                printf("Los radianes introducidos equivalen a %.2f grados\n", x);
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

float gradosARadianes() {
    float grados;
    printf("Introduce los grados:\n");
    scanf("%f", &grados);
    return grados * PI / 180;
}

float radianesAGrados() {
    float radianes;
    printf("Introduce los radianes:\n");
    scanf("%f", &radianes);
    return radianes * 180 / PI;
}