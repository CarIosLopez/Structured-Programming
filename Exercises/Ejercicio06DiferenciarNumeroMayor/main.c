/*
- Imprime la instruccion "ingresa el primer numero"
- Ingresa el numero en una variable
- Crea una segunda variable y haz lo mismo
- Si el primer numero es menor que el segundo, imprime el primer numero
- Si no, imprime el segundo numero
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;

    printf("Hola, puedo diferenciar que numero es menor que otro, pruebame!\n");

    printf("Ingresa un numero: \n");
    scanf("%i",&numero1);

    printf("Ingresa otro numero: \n");
    scanf("%i",&numero2);

    if(numero1 < numero2)
        printf("El numero menor es: %i", numero1);
    else
        printf("El numero menor es:  %i", numero2);
    return 0;
}
