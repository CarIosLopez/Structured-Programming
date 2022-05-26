#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 12 + 4;
    rRes = 12.5 - 4.7;
    rDiv = 100.0 / 3.0;
    rMult = 7.7 * 7.7;
    rMod = 120%7;

    printf("Resultado de la suma: %i \n", rSum);
    printf("Resultado de la resta: %f \n", rRes);
    printf("Resultado de la divisón: %f \n", rMult);
    printf("Resultado de la multiplicacion: %f \n", rDiv);
    printf("Resultado de la modulo: %i \n", rMod);

    return 0;
}
