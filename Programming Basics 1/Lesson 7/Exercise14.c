#include <stdio.h>
#include <ctype.h>

int main() {
    int codigoArticulo;
    float precio, unidades;
    printf("Indica el c%cdigo del art%cculo:\n", 162, 161);
    scanf("%d", &codigoArticulo);
    printf("Indica el precio:\n");
    scanf("%f", &precio);
    printf("Indica las unidades:\n");
    scanf("%f", &unidades);

    if (unidades > 100) {
        float precioDescontado = (40 * (precio * unidades)) / 100;
        printf("-C%cdigo del art%cculo: %d\n-Subtotal a pagar: %f\n-Descuento aplicado: %d%%\n-Total a pagar: %f", 162, 161, codigoArticulo, precio * unidades, 40, (precio * unidades) - precioDescontado);
    } else if (unidades >= 25 && unidades <= 100) {
        float precioDescontado = (20 * (precio * unidades)) / 100;
        printf("-C%cdigo del art%cculo: %d\n-Subtotal a pagar: %f\n-Descuento aplicado: %d%%\n-Total a pagar: %f", 162, 161, codigoArticulo, precio * unidades, 20, (precio * unidades) - precioDescontado);
    } else if (unidades >= 10 && unidades <= 24) {
        float precioDescontado = (10 * (precio * unidades)) / 100;
        printf("-C%cdigo del art%cculo: %d\n-Subtotal a pagar: %f\n-Descuento aplicado: %d%%\n-Total a pagar: %f", 162, 161, codigoArticulo, precio * unidades, 10, (precio * unidades) - precioDescontado);
    } else if (unidades < 10) {
        printf("-C%cdigo del art%cculo: %d\n-Subtotal a pagar: %f\n-Descuento aplicado: %d%%\n-Total a pagar: %f", 162, 161, codigoArticulo, precio * unidades, 0, precio * unidades);
    }

    return 0;
}