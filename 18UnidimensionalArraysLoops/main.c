#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Arreglos e iteradores unidimensionales\n");

    int intergerArray[11];

    for(int i=0; i<=11; i++){
    intergerArray[i] = i*i;
    printf("Valor del indice %i: %i\n", i, intergerArray[i]);
}
    return 0;
}
