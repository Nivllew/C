#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#define MAX_LONGITUD 100

void mostrar_menu() {
    system("cls");
    printf("\n====================================");
    printf("\n      ANALIZADOR DE PALABRAS");
    printf("\n====================================");
    printf("\n  MENU PRINCIPAL");
    printf("\n  ==============");
    printf("\n  1. Mostrar longitud de la palabra");
    printf("\n  2. Contar vocales y consonantes");
    printf("\n  3. Verificar si es palindromo");
    printf("\n  4. Ingresar nueva palabra");
    printf("\n  5. Salir");
    printf("\n\n  Seleccione una opcion (1-5): ");
}

void mostrar_palabra(char palabra[]) {
    printf("\nPalabra actual: %s\n", palabra);
}

int contar_longitud(char palabra[]) {
    return strlen(palabra);
}

void contar_vocales_consonantes(char palabra[], int *vocales, int *consonantes) {
    *vocales = 0;
    *consonantes = 0;
    
    for(int i = 0; palabra[i] != '\0'; i++) {
        char c = tolower(palabra[i]);
        if(c >= 'a' && c <= 'z') {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vocales)++;
            } else {
                (*consonantes)++;
            }
        }
    }
}

int es_palindromo(char palabra[]) {
    int longitud = strlen(palabra);
    for(int i = 0; i < longitud/2; i++) {
        if(tolower(palabra[i]) != tolower(palabra[longitud-1-i])) {
            return 0;
        }
    }
    return 1;
}

void pausar() {
    printf("\n\nPresione Enter para continuar...");
    while (getchar() != '\n');
    getchar();
}

int main() {
    char palabra[MAX_LONGITUD] = "";
    int opcion;
    int vocales, consonantes;
    
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    getchar(); 
    
    do {
        mostrar_menu();
        scanf("%d", &opcion);
        getchar(); 

        system("cls");
        printf("\n====================================");
        printf("\n      ANALIZADOR DE PALABRAS");
        printf("\n====================================");
        printf("\n");

        switch (opcion) {
            case 1:
                mostrar_palabra(palabra);
                printf("\nLongitud de la palabra: %d caracteres", contar_longitud(palabra));
                break;
                
            case 2:
                mostrar_palabra(palabra);
                contar_vocales_consonantes(palabra, &vocales, &consonantes);
                printf("\nVocales: %d", vocales);
                printf("\nConsonantes: %d", consonantes);
                break;
                
            case 3:
                mostrar_palabra(palabra);
                if(es_palindromo(palabra)) {
                    printf("\nLa palabra ES un palindromo");
                } else {
                    printf("\nLa palabra NO es un palindromo");
                }
                break;
                
            case 4:
                printf("\nIngrese una nueva palabra: ");
                scanf("%s", palabra);
                getchar(); 
                printf("\nPalabra actualizada correctamente!");
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