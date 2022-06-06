/*
Codigo de Yojhann
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int array[10], input;

    printf("Ingresa 10 valores, trata de que haya variedad entre pares e inpares\n");
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &input);
        array[i] = input;

    }

    printf("\n-----\n");

    for(int i = 0; i < 10; i++)
    {
        if(array[i]%2 == 0)
        {
            printf("En el indice [%i] hay un numero par\n", i);
        }
    }

    return 0;
}

