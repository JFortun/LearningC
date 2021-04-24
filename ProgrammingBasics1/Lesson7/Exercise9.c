#include <stdio.h>

int main() {
    int a, b, c;

    printf("Escribe tres n%cmeros:\n", 163);
    scanf(" %d %d %d", &a, &b, &c);

    if (a == b && a == c) {
        printf("El tri%cngulo es equil%ctero", 160, 160);
    } else if (a == b || a == c || b == c) {
        printf("El tri%cngulo es is%csceles", 160, 162);
    } else if (a != b && a != b && b != c) {
        printf("El tri%cngulo es escaleno", 160);
    }

    return 0;
}