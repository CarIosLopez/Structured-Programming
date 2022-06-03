/*
Escribe un programa que nos diga el numero mas grande de un arreglo
utlizando arreglos e iteradores
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Puedo diferenciar el numero mas grande\n");

    int size, max = 0;

    printf("Cual sera el tamaño de tu arreglo?\n");
    scanf("%i", &size);

    int array[size];

    for(int i = 0; i < size; i++){
            printf("Ingresa el valor %i:\n", i+1);
            scanf("%i", &array[i]);
        }
    max = array[0];
    for(int i=0; i < size; i++){
        if(array[i] > max)
            max = array[i];
    }
    printf("El numero mayor es: %i", max);
    return 0;
}
