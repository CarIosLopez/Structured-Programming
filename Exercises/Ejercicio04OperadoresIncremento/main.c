/* Ingresa un numero entero, usando operadores de asignacion realiza la
operacion de modulo de valor ingresado con 5, imprime el resultado más uno
usando operadores de incremento.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int entero;

    entero = 10;

    entero %= 5;
    entero++;

    printf("El valor de la operacion es: %i \n", entero);

    return 0;
}
