#include <stdio.h>
#include <math.h>

int main() {
    double numero_double = 3.14159;
    float numero_float = 2.71828f;
    int numero_entero = -10;
    // ceil: redondea hacia arriba al entero más cercano
    printf("ceil(%.2f) = %.2f\n", numero_double, ceil(numero_double)); 
    // ceilf: redondea hacia arriba al entero más cercano (para float)
    printf("ceilf(%.2f) = %.2f\n", numero_float, ceilf(numero_float));
    // floor: redondea hacia abajo al entero más cercano
    printf("floor(%.2f) = %.2f\n", numero_double, floor(numero_double)); 
    // abs: devuelve el valor absoluto de un entero
    printf("abs(%d) = %d\n", numero_entero, abs(numero_entero)); 
    return 0;
}


