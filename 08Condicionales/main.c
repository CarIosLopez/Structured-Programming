#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Condicion if \n");

    float valorA, valorB, valorC;

    valorA = valorB = 100;

    printf("Primera condicion \n");

    if (valorA == valorB)
        printf("Ambos son iguales \n");

    printf("Segunda condicion \n");

    if(valorA == valorB)
    {
        printf("Ambos son iguales \n");
        valorC = valorA + valorB;
        printf("Ademas la suma de ambos numeros es: %f \n", valorC);

    }

    return 0;
}
