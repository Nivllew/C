#include <stdio.h>
#include <math.h>

int main() {
    float num1;
    printf("Ingrese un numero negativo: ");
    scanf("%f", &num1);
    if (num1 >= 0) {
        printf("Error, solo raices negativas.\n");
    } else {
        float raiz_magnitud = sqrt(fabs(num1)); 
        printf("La raiz negativa es: %.2fi\n", raiz_magnitud);
    }
    return 0;
}