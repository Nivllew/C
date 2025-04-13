#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

void mostrar_menu() {
    system("cls");
    printf("\n====================================");
    printf("\n   CALCULADORA DE NUMEROS COMPLEJOS");
    printf("\n====================================");
    printf("\n  MENU PRINCIPAL");
    printf("\n  ==============");
    printf("\n  1. Suma de binomios");
    printf("\n  2. Resta de binomios");
    printf("\n  3. Multiplicacion de binomios");
    printf("\n  4. Raiz cuadrada de numero negativo");
    printf("\n  5. Salir");
    printf("\n\n  Seleccione una opcion (1-5): ");
}

void mostrar_binomios(int b1_real, int b1_imag, int b2_real, int b2_imag) {
    printf("\nBinomio 1: %d %c %di", 
           b1_real, (b1_imag >= 0 ? '+' : '-'), abs(b1_imag));
    printf("\nBinomio 2: %d %c %di", 
           b2_real, (b2_imag >= 0 ? '+' : '-'), abs(b2_imag));
    printf("\n");
}

void suma_binomios(int b1_real, int b1_imag, int b2_real, int b2_imag, int *res_real, int *res_imag) {
    *res_real = b1_real + b2_real;
    *res_imag = b1_imag + b2_imag;
}

void imaginario(int num_negativo) {
    if(num_negativo >= 0) {
        printf("\nError: El numero debe ser negativo!");
        return;
    }
    
    float raiz = sqrt(abs(num_negativo)); 
    printf("\nLa raiz cuadrada de %d es: %.2fi", num_negativo, raiz);
}

void pausar() {
    printf("\n\nPresione Enter para continuar...");
    while (getchar() != '\n');
    getchar();
}

int main() {
    srand(time(NULL));
    int opcion;
    int b1_real, b1_imag, b2_real, b2_imag;
    int res_real, res_imag;
    int num_negativo;
    
    do {
        mostrar_menu();
        scanf("%d", &opcion);

        system("cls");
        printf("\n====================================");
        printf("\n   CALCULADORA DE NUMEROS COMPLEJOS");
        printf("\n====================================");
        printf("\n");

        if (opcion >= 1 && opcion <= 3) {
            b1_real = rand() % 10;
            b1_imag = rand() % 10;
            b2_real = rand() % 10;
            b2_imag = rand() % 10;
            
            mostrar_binomios(b1_real, b1_imag, b2_real, b2_imag);
        }

        switch (opcion) {
            case 1: 
                suma_binomios(b1_real, b1_imag, b2_real, b2_imag, &res_real, &res_imag);
                printf("\nResultado de la suma: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 2: 
                res_real = b1_real - b2_real;
                res_imag = b1_imag - b2_imag;
                printf("\nResultado de la resta: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 3: 
                res_real = (b1_real * b2_real) - (b1_imag * b2_imag);
                res_imag = (b1_real * b2_imag) + (b1_imag * b2_real);
                printf("\nResultado de la multiplicacion: %d %c %di", 
                       res_real, (res_imag >= 0 ? '+' : '-'), abs(res_imag));
                break;
                
            case 4: 
                printf("\nIngrese un numero negativo: ");
                scanf("%d", &num_negativo);
                imaginario(num_negativo);
                break;
                
            case 5:
                printf("\nSaliendo del programa...\n\n");
                break;
                
            default:
                printf("\nOpcion no valida!");
                printf("\nPor favor seleccione 1-5");
                break;
        }

        if (opcion != 5) {
            pausar();
        }
    } while (opcion != 5);

    return 0;
}