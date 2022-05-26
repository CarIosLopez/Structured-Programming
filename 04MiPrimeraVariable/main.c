#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';
    bool boolean = false;

    // En la siguiente linea estamos imprimiendo mi variable intergerA

    printf("Ingresa el valor del entero A: ");

    scanf("%i", &integerA);

    printf("Ingesa el valor del float A: ");

    scanf("%f", &floatA);

    printf("Ingresa el valor de letter A: ");

    scanf(" %c", &letterA);

    printf("El valor de nuestro entero A es: %i", integerA);
    printf("El valor de nuestro float A es: %f", floatA);
    printf("El valor de nuestro letter A es: %c", letterA);



    return 0;
}
