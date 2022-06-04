/*
- Vamos a calcular la potencia de un numero
- Ingresar un valor base
- Ingresar un valor de exponente
- Dentro de una funcion calcular el exponente del numero base
- Imprime el resultado
*/

#include <stdio.h>
#include <stdlib.h>

int operation(int input, int inputPower)
{
    int result = 1;
    for(int i = 0; i < inputPower; i++)
    {
        result = result * input;
    }
    return result;
}

int main()
{
    int input, inputPower;

    printf("Calcular potencia de un numero\n");

    printf("Ingresa un valor que quieras sacarle potencia\n");
    scanf("%i", &input);

    printf("A que potencia quieres elevar el %i \n", input);
    scanf("%i", &inputPower);

    printf("El resultado de %i a la potencia %i es: %i\n", input, inputPower, operation(input, inputPower));

    return 0;
}
