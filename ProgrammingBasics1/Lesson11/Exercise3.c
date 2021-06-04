#include <stdio.h>

int main() {
    int tabla[4] = {1, 2, 3, 4};

    for (int i = 3; i >= 0; i--) {
        printf("\ntabla[%d] = %d ", i, tabla[i]);
    }

    return 0;
}
