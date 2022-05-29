#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float valorA, valorB, valorC;

    valorA = 5;
    valorB = valorC = 10;

    if(valorA < valorB && valorB == valorC)
        printf("Se cumplieron las dos condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");



    if(valorA < valorB || valorB == valorC)
        printf("Se cumplieron las dos condiciones\n");
    else if(valorA < valorB || valorB <= valorC)
        printf("Se cumplio una de las condiciones\n");
    else if(valorA > valorB || valorB == valorC)
        printf("Se cumlio una de las condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");


    return 0;
}
