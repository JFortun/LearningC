#include<stdio.h>

float farenACenti();

float centiAFaren();

int main() {
    int opcion;
    float x;
    for (;;) {
        printf("----------Conversi%cn de grados----------\n", 162);
        printf("1 Fahrenheit a Cent%cgrados\n", 161);
        printf("2 Cent%cgrados a Fahrenheit\n", 161);
        printf("3 Salir\n");
        printf("Elige tu opci%cn:\n", 162);
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                x = farenACenti();
                printf("Grados cent%cgrados = %.2f\n", 161, x);
                break;
            case 2:
                x = centiAFaren();
                printf("Grados fahrenheit = %.2f\n", x);
                break;
            case 3:
                break;
            default:
                printf("--Opci%cn incorrecta--\n", 162);
        }
        if (opcion == 3) {
            break;
        }
    }
    return 0;
}

float farenACenti() {
    float f, c;
    printf("Grados fahrenheit = \n");
    scanf("%f", &f);
    c = (5.0 / 9.0) * (f - 32);

    return c;
}

float centiAFaren() {
    float c, f;
    printf("Grados Cent%cgrados = \n", 161);
    scanf("%f", &c);
    f = ((9.0 / 5.0) * c) + 32;

    return f;
}