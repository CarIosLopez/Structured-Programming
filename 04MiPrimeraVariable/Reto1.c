#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int variableA = 6;
    int variableB = 8;
    int auxA = 14;

    printf("Ingresa el valor de A: ");
    scanf(" %i",&variableA);

    printf("Ingresa el valor de B: ");
    scanf(" %i",&variableB);

    auxA = variableA;
    auxA = variableB;


    return 0;
}
