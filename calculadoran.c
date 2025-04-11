#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    srand(time(NULL));
    int opcion;
    int b1_real, b1_imag, b2_real, b2_imag;
    int res_real, res_imag;
    int denominador;
    
    do {
        system("cls");
        printf("\n====================================");
        printf("\n   CALCULADORA DE NUMEROS COMPLEJOS");
        printf("\n====================================");
        printf("\n  MENU PRINCIPAL");
        printf("\n  ==============");
        printf("\n  1. Suma de binomios");
        printf("\n  2. Resta de binomios");
        printf("\n  3. Multiplicacion de binomios");
        printf("\n  4. Division de binomios");
        printf("\n  5. Salir");
        printf("\n\n  Seleccione una opcion (1-5): ");

        scanf("%d", &opcion);

        system("cls");
        printf("\n====================================");
        printf("\n   CALCULADORA DE NUMEROS COMPLEJOS");
        printf("\n====================================");
        printf("\n");

        if (opcion >= 1 && opcion <= 4) {
            b1_real = rand() % 10;
            b1_imag = rand() % 10;
            b2_real = rand() % 10;
            b2_imag = rand() % 10;
            
            printf("\nBinomio 1: %d %c %di", 
                   b1_real, (b1_imag >= 0 ? '+' : '-'), abs(b1_imag));
            printf("\nBinomio 2: %d %c %di", 
                   b2_real, (b2_imag >= 0 ? '+' : '-'), abs(b2_imag));
            printf("\n");
        }

        switch (opcion) {
            case 1: // Suma
                res_real = b1_real + b2_real;
                res_imag = b1_imag + b2_imag;
                printf("\nResultado de la suma: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 2: // Resta
                res_real = b1_real - b2_real;
                res_imag = b1_imag - b2_imag;
                printf("\nResultado de la resta: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 3: // Multiplicación
                res_real = (b1_real * b2_real) - (b1_imag * b2_imag);
                res_imag = (b1_real * b2_imag) + (b1_imag * b2_real);
                printf("\nResultado de la multiplicacion: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 4: // División
                denominador = (b2_real * b2_real) + (b2_imag * b2_imag);
                if (denominador == 0) {
                    printf("\nError: Division por cero (binomio 2 es cero).");
                } else {
                    res_real = (b1_real * b2_real) + (b1_imag * b2_imag);
                    res_imag = (b1_imag * b2_real) - (b1_real * b2_imag);
                    printf("\nResultado de la division: ");
                    printf("%d/%d %c %d/%di", 
                           res_real, denominador, 
                           (res_imag >= 0 ? '+' : '-'), abs(res_imag), denominador);
                }
                break;
                
            case 5: // Salir
                printf("\nSaliendo del programa...\n\n");
                break;
                
            default:
                printf("\nOpcion no valida!");
                printf("\nPor favor seleccione 1-5");
                break;
        }

        if (opcion != 5) {
            printf("\n\nPresione Enter para continuar...");
            while (getchar() != '\n');
            getchar();
        }
    } while (opcion != 5);

    return 0;
}