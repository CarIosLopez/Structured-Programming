// Calcular el area de un cilindro - formula 2π r h + 2π r²

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int radio;
    int altura;
    float pi;
    int dos;

    radio = 4;
    altura = 8;
    pi = 3.1416;
    dos = 2;


    float area1 = dos * pi * radio * altura;
    float area2 = dos * pi * radio * radio;
    float areaT = area1 + area2;


    printf("El area de mi cilindro es: %f \n", areaT);

    return 0;
}
