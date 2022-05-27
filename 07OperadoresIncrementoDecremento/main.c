// Ejercicio para ver como funciona ++ -- (+1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de Incremento y Decremento \n");

    int value, res;

    value = 25;
    res = value++;
    printf("El valor de value es: %i \n", res);
    printf("Value: %i \n", value);

    value = 25;
    res = ++value;
    printf("El valor de value es: %i \n", res);

    value = 25;
    res = value--;
    printf("El valor de value es: %i \n", res);

    value = 25;
    res = --value;
    printf("El valor de value es: %i \n", res);

    return 0;
}
