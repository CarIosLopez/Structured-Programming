/*
Ingresar valores a un arreglo con un tamaño de 5, multiplicar todos sus valores,
imprimir el resultado
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Mutiplicando valores de un array\n");

    printf("Ingresa los valores \n");

    int list[5], resultados = 1;

    for(int i=0; i<5; i++){
        printf("Valor[%i]: ", i+1);
        scanf("%i", &list[i]);
        resultados *= list[i];
    }

    printf("El resultado es %i\n", resultados);

    return 0;
}
