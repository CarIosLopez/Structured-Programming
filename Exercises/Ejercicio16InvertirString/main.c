/*
Haz un programa que reciba una cadena de caracteres e imprime de regreso la
misma cadena de forma invertida
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Puedo invertir un string\n");

    char str[50];

    int len;

    printf("Ingresa el string que quieres invertir\n");
    gets(str);

    printf("El string es: ");
    puts(str);

    len = strlen(str);

    printf("Tu palabra invertida es: ");

    for(int i = len; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}
