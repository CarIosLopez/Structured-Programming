#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if, else, else if \n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    if(valA == valB)
        printf("No se va a cumplir la condicion \n");
    else if(valB == valC)
        printf("Tampoco se va a cumplir esta condicion \n");
    else{
        printf("Ninguna condicion se cumplio \n");
        printf("El programa a terminado");
    }
    return 0;
}
