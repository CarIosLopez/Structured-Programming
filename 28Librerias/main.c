#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    float firstValue;
    float secondValue;
    float result;
    int option;

    printf("Soy una calculadora\n");
    printf("Que operacion quieres realizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Elige una opcion: ");

    scanf("%i", &option);

    printf("Ingresa el primer dato: ");
    scanf("%f", &firstValue);
    printf("Ingresa el segundo dato: ");
    scanf("%f", &secondValue);
    printf("Procesando datos...\n");
    printf("\n\n");

    switch(option)
    {
    case 1:
        result = addition(firstValue, secondValue);
        break;

    case 2:
        result = substraction(firstValue, secondValue);
        break;

    case 3:
        result = multiplication(firstValue, secondValue);
        break;

    case 4:
        result = division(firstValue, secondValue);
        break;

    default:
        printf("Ingresa un numero correcto\n");
    }

    printf("El resultado de la operacion es: %f", result);
    printf("\n\n");

    return 0;
}
