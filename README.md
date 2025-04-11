& .\'calculadoran.exe'

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h> // Necesaria para pow y sqrt

int main() {
    srand(time(NULL));
    int opcion;
    int b1_real, b1_imag, b2_real, b2_imag;
    int res_real, res_imag;
    int exponente;
    float modulo, argumento, raiz_real, raiz_imag;
    
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
        printf("\n  4. Raiz cuadrada (de Binomio 1)");
        printf("\n  5. Potencia (de Binomio 1)");
        printf("\n  6. Salir");
        printf("\n\n  Seleccione una opcion (1-6): ");

        scanf("%d", &opcion);

        system("cls");
        printf("\n====================================");
        printf("\n   CALCULADORA DE NUMEROS COMPLEJOS");
        printf("\n====================================");
        printf("\n");

        if (opcion >= 1 && opcion <= 5) {
            b1_real = rand() % 10;
            b1_imag = rand() % 10;
            if (opcion <= 3) { // Solo genera Binomio 2 para opciones 1-3
                b2_real = rand() % 10;
                b2_imag = rand() % 10;
            }
            
            printf("\nBinomio 1: %d %c %di", 
                   b1_real, (b1_imag >= 0 ? '+' : '-'), abs(b1_imag));
            if (opcion <= 3) {
                printf("\nBinomio 2: %d %c %di", 
                       b2_real, (b2_imag >= 0 ? '+' : '-'), abs(b2_imag));
            }
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
                
            case 4: // Raíz cuadrada
                modulo = sqrt(b1_real * b1_real + b1_imag * b1_imag);
                argumento = atan2(b1_imag, b1_real);
                
                // Primera raíz (k=0)
                raiz_real = sqrt(modulo) * cos(argumento / 2);
                raiz_imag = sqrt(modulo) * sin(argumento / 2);
                printf("\nRaiz cuadrada 1: %.2f %c %.2fi", 
                       raiz_real, (raiz_imag >= 0 ? '+' : '-'), fabs(raiz_imag));
                
                // Segunda raíz (k=1)
                raiz_real = sqrt(modulo) * cos((argumento + 2 * M_PI) / 2);
                raiz_imag = sqrt(modulo) * sin((argumento + 2 * M_PI) / 2);
                printf("\nRaiz cuadrada 2: %.2f %c %.2fi", 
                       raiz_real, (raiz_imag >= 0 ? '+' : '-'), fabs(raiz_imag));
                break;
                
            case 5: // Potencia
                printf("\nIngrese el exponente: ");
                scanf("%d", &exponente);
                
                modulo = pow(sqrt(b1_real * b1_real + b1_imag * b1_imag), exponente);
                argumento = atan2(b1_imag, b1_real) * exponente;
                
                res_real = round(modulo * cos(argumento)); // Redondeamos para evitar -0.00
                res_imag = round(modulo * sin(argumento));
                
                printf("\nResultado de la potencia: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 6: // Salir
                printf("\nSaliendo del programa...\n\n");
                break;
                
            default:
                printf("\nOpcion no valida!");
                printf("\nPor favor seleccione 1-6");
                break;
        }

        if (opcion != 6) {
            printf("\n\nPresione Enter para continuar...");
            while (getchar() != '\n');
            getchar();
        }
    } while (opcion != 6);

    return 0;
}