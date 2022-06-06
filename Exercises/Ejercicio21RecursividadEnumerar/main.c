/*
Enumerar usando recursividad
*/

#include <stdio.h>
#include <stdlib.h>

int enumerador(int number)
{
    if (number > 1)
    {
        enumerador(number-1);
    }
    printf("%i\n", number);
    return 0;
}

int main()
{
    int number, result;

    printf("Enumerar con recursividad\n");
    printf("Hasta que numero quieres que enumere: \n");
    scanf("%i", &number);
    printf("\n\n");

    result = enumerador(number);


    return 0;
}
