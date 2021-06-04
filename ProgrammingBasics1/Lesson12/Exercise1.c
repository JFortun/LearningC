#include <stdio.h>

int main() {
    char nombre1[100], nombre2[100], nombre3[100], nombre4[100], nombre5[100];

    printf("Introduce cinco nombres\n");
    scanf("%s%s%s%s%s", nombre1, nombre2, nombre3, nombre4, nombre5);

    printf("Los nombres introducidos son: %s, %s, %s, %s y %s\n", nombre1, nombre2, nombre3, nombre4, nombre5);

    return 0;
}