#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int a[3][3], int b[3][3], int c[3][3]) {
    int f, s;
    for (f = 0; f < 3; f++) {
        for (s = 0; s < 3; s++) {
            a[f][s] = rand() % 3;
            b[f][s] = rand() % 3;
            c[f][s] = 0;
        }
    }
}

void imprimir(int mat[3][3]) {
    int f, s;
    for (f = 0; f < 3; f++) {
        for (s = 0; s < 3; s++) {
            printf("[%i] ", mat[f][s]);
        }
        printf("\n");
    }
}

void suma(int a[3][3], int b[3][3], int c[3][3]) {
    int f, s;
    for (f = 0; f < 3; f++) {
        for (s = 0; s < 3; s++) {
            c[f][s] = a[f][s] + b[f][s];
        }
    }
}

void resta(int a[3][3], int b[3][3], int c[3][3]) {
    int f, s;
    for (f = 0; f < 3; f++) {
        for (s = 0; s < 3; s++) {
            c[f][s] = a[f][s] - b[f][s];
        }
    }
}

void multiplicacion(int a[3][3], int b[3][3], int c[3][3]) {
    int f, s, k;
    for (f = 0; f < 3; f++) {
        for (s = 0; s < 3; s++) {
            c[f][s] = 0;
            for (k = 0; k < 3; k++) {
                c[f][s] += a[f][k] * b[k][s];
            }
        }
    }
}

int main() {
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int opcion;
    srand(time(0));
    int matrizCargada = 0;

    do {
        system("cls");
        printf("\n====================================");
        printf("\n    CALCULADORA DE MATRICES 3x3");
        printf("\n====================================");
        printf("\n    1. Cargar");
        printf("\n    2. Imprimir");
        printf("\n    3. Suma");
        printf("\n    4. Resta");
        printf("\n    5. Multiplicacion ");
        printf("\n    6. Salir");
        printf("\n\n    Seleccione una opcion (1-6): ");
        scanf("%d", &opcion);

        while (getchar() != '\n');

        system("cls");
        printf("\n====================================");
        printf("\n    CALCULADORA DE MATRICES 3x3");
        printf("\n====================================");
        printf("\n");

        switch (opcion) {
            case 1:
                printf("\n    La matriz se ha cargado correctamente.\n");
                cargar(a, b, c);
                matrizCargada = 1;
                printf("\n    Presione Enter para continuar...\n");
                while (getchar() != '\n');
                break;
            case 2:
                if (!matrizCargada) {
                    printf("\n    La matriz no ha sido cargada.\n");
                    printf("\n    Presione Enter para continuar...\n");
                    while (getchar() != '\n');
                } else {
                    printf("\nMatriz A:\n");
                    imprimir(a);
                    printf("\nMatriz B:\n");
                    imprimir(b);
                    printf("\n    Presione Enter para continuar...\n");
                    while (getchar() != '\n');
                }
                break;
            case 3:
                cargar(a, b, c);
                suma(a, b, c);
                printf("\nMatriz A:\n");
                imprimir(a);
                printf("\n\nMatriz B:\n");
                imprimir(b);
                printf("\n\nMatriz C (A + B):\n");
                imprimir(c);
                printf("\n\nPresione Enter para continuar...\n");
                while (getchar() != '\n');
                break;
            case 4:
                if (!matrizCargada){
                    printf("\n    La matriz no ha sido cargada.\n");
                    printf("\n    Presione Enter para continuar...\n");
                    while (getchar() != '\n');
                    break;
                }
                resta(a, b, c);
                printf("\nMatriz A:\n");
                imprimir(a);
                printf("\n\nMatriz B:\n");
                imprimir(b);
                printf("\n\nMatriz C (A - B):\n");
                imprimir(c);
                printf("\n\nPresione Enter para continuar...\n");
                while (getchar() != '\n');
                break;
            case 5:
                if (!matrizCargada){
                    printf("\n    La matriz no ha sido cargada.\n");
                    printf("\n    Presione Enter para continuar...\n");
                    while (getchar() != '\n');
                    break;
                }
                multiplicacion(a, b, c);
                printf("\nMatriz A:\n");
                imprimir(a);
                printf("\n\nMatriz B:\n");
                imprimir(b);
                printf("\n\nMatriz C (A * B):\n");
                imprimir(c);
                printf("\n\nPresione Enter para continuar...\n");
                while (getchar() != '\n');
                break;
            case 6:
                printf("Saliendo del programa...\n\n");
                break;
            default:
                printf("\nOpcion no valida!");
                printf("\nPor favor seleccione 1-6");
                break;
        }
    } while (opcion != 6);

    return 0;
}