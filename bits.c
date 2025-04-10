#include <stdio.h>

int main(void) {
    int a = 0, b = 1;
    unsigned char unByte1 = 1; // Tamaño de 1 byte, de 0 a 255
    unsigned char unByte2 = 128; 

    printf("Programa  1:");
     // utilizaremos el operador & (AND)
    printf("\n%d & %d : %d", a, a, a & a);
    printf("\n%d & %d : %d", a, b, a & b);
    printf("\n%d & %d : %d", b, a, b & a);
    printf("\n%d & %d : %d", b, b, b & b);

    printf("\n"); // utilizaremos el operador | (OR)
    printf("\n%d | %d : %d", a, a, a | a);
    printf("\n%d | %d : %d", a, b, a | b);
    printf("\n%d | %d : %d", b, a, b | a);
    printf("\n%d | %d : %d", b, b, b | b);

    printf("\n"); // utilizaremos el operador ^ (XOR)
    printf("\n%d ^ %d : %d", a, a, a ^ a);
    printf("\n%d ^ %d : %d", a, b, a ^ b);
    printf("\n%d ^ %d : %d", b, a, b ^ a);
    printf("\n%d ^ %d : %d", b, b, b ^ b);
   
    printf("\n\n\n");
    printf("Programa  2: \n");
    printf("Desplazamiento de bits (una posición a la izquierda)\n");
    printf("Valor inicial: %d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf("%0d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %1d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %2d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %3d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %4d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %5d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf(" %6d\n", unByte1);
    unByte1 = unByte1 << 1;
    printf("%7d\n", unByte1);


    printf("Programa  3: \n");
    printf("Desplazamiento de bits (una posición a la derecha)\n");
    printf("Valor inicial: %d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("%0d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf(" %1d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %2d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %3d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %4d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %5d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %6d\n", unByte2);
    unByte2 = unByte2 >> 1;
    printf("  %7d\n", unByte2);
    return 0;
}