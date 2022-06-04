#include <stdlib.h>
#include <stdio.h>

int fibonacci(int number){
    if (number < 2){
       return n;
    }
    else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

int main(){
    int result,number;
    printf("Sucesion de fibonacci\n");
    printf("Ingrese un numero para la sucesion ");
    scanf("%i", &number);

    result = fibonacci(number);
    printf("El fibonacci de %i: %i",number,result);
    return 0;
}
