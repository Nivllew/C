#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int num1, num2;
    int opcion;
    do
    {
        system("cls");
        printf("\n====================================");
        printf("\n        CALCULADORA IMAGINARIA");
        printf("\n====================================");
        printf("\n  MENU PRINCIPAL");
        printf("\n  ==============");
        printf("\n  1. Suma");
        printf("\n  2. Resta");
        printf("\n  3. Multiplicacion");
        printf("\n  4. Division");
        printf("\n  5. Potencia");
        printf("\n  6. Raiz");
        printf("\n  7. Salir");
        printf("\n\n  Seleccione una opcion (1-7): ");

        scanf("%d", &opcion);

        system("cls");
        printf("\n====================================");
        printf("\n        CALCULADORA MAGINARIA");
        printf("\n====================================");
        printf("\n");

        if (opcion != 6)
        {
            num1 = rand() % 100;
            num2 = rand() % 100;
        }

        switch (opcion)
        {
        case 1:
            printf("\nSuma");
             break;  
        case 2:
        printf("\n  2. Resta");
             break;   

        case 3:
        printf("\n  3. Multiplicacion");
            break;        

        case 4:
        printf("\n  4. Division");
            break;
        

        case 5:
        printf("\n  5. Potencia");
            break;
          
        case 6:
        printf("\n  6. Raiz");
            break;

        case 7:
            printf("\n  Saliendo del programa...\n\n");
            break;

        default:
            printf("\n  Opcion no valida!");
            printf("\n  Por favor seleccione 1-7");
            break;
        }

        if (opcion != 7)
        {
            printf("\n\nPresione Enter para continuar...");
            while (getchar() != '\n');
            getchar();
        }
    } while (opcion != 7);

    return 0;
}