#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB)
        printf("Pregunta 1: True \n");
    else
        printf("Pregunta 1: False \n");

    if(valA <= valB)
        printf("Pregunta 2: True \n");
    else
        printf("Pregunta 2: False \n");

    if(valA > valB)
        printf("Pregunta 3: True \n");
    else
        printf("Pregunta 3: False \n");

    if(valA >= valB)
        printf("Pregunta 4: True \n");
    else
        printf("Pregunta 4: False \n");

    if(valA == valB)
        printf("Pregunta 5: True \n");
    else
        printf("Pregunta 5: False \n");

    if(valA != valB)
        printf("Pregunta 6: True \n");
    else
        printf("Pregunta 6: False \n");


    return 0;
}
