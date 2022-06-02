// Usando for - Imprime la secuencia Fibonacci hasta la novena vuelta

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vueltas, x = 0, y = 1, z = 1;

    printf("Secuencia Fibonacci\n");
    printf("Cuantas vueltas quieres que recorra?: ");
    scanf("%i", &vueltas);


    for(int i = 1; i <= vueltas; i++){
        z = x + y;
        x = y;
        y = z;

        printf("%i\n", z);
    }
    printf("Fin del programa!");
    return 0;
}
