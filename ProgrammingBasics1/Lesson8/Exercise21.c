#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void Randomize() {
    srand((unsigned) time(NULL));
}

int Random(int Max) {
    return (rand() % Max);
}

int main() {
    Randomize();
    int manoOrdenador = Random(4), manoJugador, apuestaOrdenador = Random(4), apuestaJugador;

    printf("Indica el n%cmero de monedas que vas a elegir:\n", 163);
    scanf("%d", &manoJugador);

    printf("Indica tu apuesta:\n");
    scanf("%d", &apuestaJugador);

    if (manoJugador == apuestaOrdenador && manoOrdenador == apuestaJugador) {
        printf("Ha habido un empate.\n");
    } else if (manoJugador == apuestaOrdenador) {
        printf("Ha ganado el ordenador.\n");
    } else if (manoOrdenador == apuestaJugador) {
        printf("Ha ganador el jugador.\n");
    } else {
        printf("Nadie ha ganado.\n");
    }

    return 0;
}