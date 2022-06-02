/*
Hacer un programa que imprima el simbolo de # en 5 filas
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Solo puedo imprimir el siguiente simbolo 5 veces: #\n");

    int limitGatos = 5;
    int gatos = 1;

    while(gatos <= limitGatos){
        printf("# \n");
        gatos++;
    }
    return 0;
}
