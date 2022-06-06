/*
Leer un arreglo de 10 posiciones y determinar en que posiciones se encuentran los
numeros pares
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Leer un arreglo de 10 posiciones y determinar en que posiciones se encuentran los numeros pares\n");

    int array[10], input;

    printf("Ingresa 10 valores, trata de que haya variedad entre pares e inpares\n");
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Ingrese el %i valor: \n", i+1);
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

// Asignar una variable donde se guarde array y borra el codigo extra que hiciste pete
// Buena practica: Corchetes abajo, poner constantes estaticas MAXNUM = 10;
/*
El texto se suele definir como una constante, cuando trabajas en proyectos de grande escala
puede ser para no confundir lenguaje(ingles-portugues,etc):B
*/
