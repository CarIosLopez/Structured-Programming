#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For\n");

    int upperLimit, bottomLimit;

    printf("Imprimir en orden descendiente \n");

    printf("Ingresar limite superior: \n");
    scanf("%i", &upperLimit);

    printf("Ingresar limite inferior: \n");
    scanf("%i", &bottomLimit);

    for(int i = upperLimit; i >= bottomLimit; i--){
        printf("El numero es %i \n", i);
    }

    return 0;
}
