#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente;

    printf("Indica la base y el exponente del n%cmero al que quieres hacer la potencia:\n", 163);
    scanf("%lf%lf", &base, &exponente);

    printf("\nLa potencia del n%cmero indicado es: %f", 163, pow(base, exponente));

    return 0;
}