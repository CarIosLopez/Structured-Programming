#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char nameC[50];

    int size;

    printf("Ingresar el nombre con gets: \n";
    gets(nameC);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);

    printf("\n El tama�o de la cadena es: %i \n", size);
    return 0;
}
