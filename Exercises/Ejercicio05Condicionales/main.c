/*
Define una variable cuyo valor sea 5, en otra variable ingresar un numero
con la instruccion entre el 1 y el 10, si el numero ingresado es igual a la
variable 5, imprimir "adivinaste", si no imprime "ese no es, perdiste"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adivina el numero \n");

    int numero = 5;
    int numeroUsuario;

    printf("Introduce un numero cuyo se encuentre entre 1 y 10 \n");
    scanf("%i",&numeroUsuario);

    if(numero == numeroUsuario){
        printf("Haz adivinado, felicidades\n");
        printf("El programa a terminado\n");
    }
    else{
        printf("Mas suerte la proxima vez\n");
        printf("El programa a terminado\n");
    }
    return 0;
}
