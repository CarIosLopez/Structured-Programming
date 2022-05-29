#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos Unidemsnionales\n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatlist[] = {23.4, 34.6, 25.6, 21.8, 56.7};

    char charList[4];
    charList[0] = 'J';
    charList[1] = 'e';
    charList[2] = 'j';
    charList[3] = 'e';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Ultimo flotante: \t\t %f", floatlist[4]);
    printf("\n Primer caracter: \t\t %c%c%c%c\n", charList[0], charList[1], charList[2], charList[3]);

    return 0;
}
