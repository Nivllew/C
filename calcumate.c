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
        printf("\n        CALCULADORA");
        printf("\n====================================");
        printf("\n  MENU PRINCIPAL");
        printf("\n  ==============");
        printf("\n  1. Suma");
        printf("\n  2. Resta");
        printf("\n  3. Multiplicacion");
        printf("\n  4. Division");
        printf("\n  5. Potencia");
        printf("\n  6. Raiz Cuadrada");
        printf("\n  7. Promedio de Alumnos");
        printf("\n  8. Promedio Clima");
        printf("\n  9. Salir");
        printf("\n\n  Seleccione una opcion (1-9): ");

        scanf("%d", &opcion);

        system("cls");
        printf("\n====================================");
        printf("\n        CALCULADORA");
        printf("\n====================================");
        printf("\n");

        if (opcion != 7 && opcion != 8)
        {
            num1 = rand() % 100;
            num2 = rand() % 100;
        }

        switch (opcion)
        {
        case 1:
            printf("\n  %d + %d = %d", num1, num2, num1 + num2);
            break;

        case 2:
            printf("\n  %d - %d = %d", num1, num2, num1 - num2);
            break;

        case 3:
            printf("\n  %d * %d = %d", num1, num2, num1 * num2);
            break;

        case 4:
            if (num2 != 0)
            {
                printf("\n  %d / %d = %.4f", num1, num2, (float)num1 / (float)num2);
            }
            else
            {
                printf("\n  No se puede dividir por cero");
            }
            break;

        case 5:
            printf("\n  %d ^ %d = %.4f", num1, num2, pow((float)num1, (float)num2));
            break;

        case 6:
            printf("\n  Raiz cuadrada:");
            if (num1 >= 0)
            {
                printf("\n  %d = %.4f", num1, sqrt((float)num1));
            }
            else
            {
                printf("\n  %d = No existe", num1);
            }

            break;

        case 7:
        {
            int numAlumnos, aprobados = 0, reprobados = 0;
            float sumaCalificaciones = 0, promedio;

            printf("\n  Ingrese el numero de alumnos: ");
            scanf("%d", &numAlumnos);

            if (numAlumnos <= 0)
            {
                printf("\n Debe ingresar un numero positivo de alumnos!");
                break;
            }

            printf("\n  Calificaciones generadas (1-10):\n");
            for (int i = 0; i < numAlumnos; i++)
            {
                int calificacion = 1 + rand() % 10;
                printf("  Alumno %d: %d\n", i + 1, calificacion);

                sumaCalificaciones += calificacion;
                if (calificacion >= 6)
                {
                    aprobados++;
                }
                else
                {
                    reprobados++;
                }
            }

            promedio = sumaCalificaciones / numAlumnos;

            printf("\n  Aprobados: %d", aprobados);
            printf("\n  Reprobados: %d", reprobados);
            printf("\n  Promedio del grupo: %.2f", promedio);

            if (promedio >= 6.0)
            {
                printf("\n  El grupo tiene un promedio APROBATORIO");
            }
            else
            {
                printf("\n El grupo tiene un promedio REPROBATORIO");
            }
        }
        break;

        case 8:
        {
            int dias = (rand() % 2) ? 30 : 31;
            int temp30_35 = 0, temp36_40 = 0, temp41_45 = 0;
            float sumaTemperaturas = 0, promedio;

            printf("\n  Analizando temperaturas de %d dias:\n", dias);
            for (int i = 0; i < dias; i++)
            {
                int temperatura = 30 + rand() % 16;
                printf("  Dia %d: %d C\n", i + 1, temperatura);

                sumaTemperaturas += temperatura;

                // Operador ternario anidado para categorización de temperaturas
                temperatura <= 35 ? temp30_35++ : (temperatura <= 40 ? temp36_40++ : temp41_45++);
            }

            promedio = sumaTemperaturas / dias;

            printf("\n  Temperatura promedio: %.2f C", promedio);
            printf("\n  Dias entre 30-35 C: %d", temp30_35);
            printf("\n  Dias entre 36-40 C: %d", temp36_40);
            printf("\n  Dias entre 41-45 C: %d", temp41_45);

            break;
        }

        case 9:
            printf("\n  Saliendo del programa...\n\n");
            break;

        default:
            printf("\n  Opcion no valida!");
            printf("\n  Por favor seleccione 1-9");
            break;
        }

        if (opcion != 9)
        {
            printf("\n\nPresione Enter para continuar...");
            while (getchar() != '\n')
                ;
            getchar();
        }
    } while (opcion != 9);

    return 0;
}