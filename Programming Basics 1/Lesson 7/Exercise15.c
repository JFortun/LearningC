#include <stdio.h>
#include <string.h>

int main() {
    char vehiculo[15];
    char moto[15] = "moto";
    char coche[15] = "coche";
    char camion[15] = "camion";
    char autobus[15] = "autobus";

    float precio, kilometros, toneladas;
    printf("Indica el tipo de veh%cculo en el que circulas:\n", 161);
    scanf("%s", &vehiculo);

    if (strcmp(moto, vehiculo) == 0) {
        precio = 3.2;
        printf("Tienes que pagar %f euros", precio);
    } else if (strcmp(coche, vehiculo) == 0) {
        precio = 0.1;
        printf("%cCu%cntos kil%cmetros has recorrido?:\n", 168, 160, 162);
        scanf("%f", &kilometros);
        printf("Tienes que pagar %f euros", kilometros * precio);
    } else if (strcmp(camion, vehiculo) == 0) {
        precio = 0.1;
        printf("%cCu%cntos kil%cmetros has recorrido?:\n", 168, 160, 162);
        scanf("%f", &kilometros);
        printf("%cCu%cntas toneladas llevas?:\n", 168, 160);
        scanf("%f", &toneladas);
        printf("Tienes que pagar %f euros", (kilometros * precio) + (toneladas * precio));
    } else if (strcmp(autobus, vehiculo) == 0) {
        precio = 0.2;
        printf("%cCu%cntos kil%cmetros has recorrido?:\n", 168, 160, 162);
        scanf("%f", &kilometros);
        printf("Tienes que pagar %f euros", kilometros * precio);
    }

    return 0;
}