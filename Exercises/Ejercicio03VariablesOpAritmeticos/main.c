/*
Crea una variable llamada x con valor 10, utiliza operadores de asignación haz
que esta variable se sume a sí misma el doble de lo que vale
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    x = 10;

    x += x * 2;

    printf("El resultado es: %i \n", x);


    return 0;
}
