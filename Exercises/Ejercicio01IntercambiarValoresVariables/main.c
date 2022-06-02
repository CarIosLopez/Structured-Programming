#include <stdio.h>
#include <stdlib.h>


int main()
{
    int variableA;
    int variableB;
    int auxA;

    printf("Ingresa el valor de A: ");
    scanf(" %i",&variableA);

    printf("Ingresa el valor de B: ");
    scanf(" %i",&variableB);

    auxA = variableA;
    variableA = variableB;
    variableB = auxA;

    printf("\n");
    printf("El valor de mi variable A es: %i \n", variableA);
    printf("El valor de mi variable B es: %i \n", variableB);


    return 0;
}
