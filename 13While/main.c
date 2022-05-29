// Enumeracion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador while \n");
    printf("Hola, puedo hacer una lista hasta el numero que tu me indiques\n");
    printf("Ingresa un numero limite\n");

    int limit;

    scanf("%i", &limit);

    int i = 1;

    while(i <= limit){
        printf("Numero: %i \n", i);
        i++;
    }
    return 0;
}
