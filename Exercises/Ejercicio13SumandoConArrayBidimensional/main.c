/*
Crea un array de 3 filas por 4 columnas en donde:
- Los elementos de la primera file sumen un total de 4
- Los elementos de la segunda file sumen un total de 10
- Los elementos de la  fila sumen un total de 26
- Imprime las sumatorias de cada fila
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][4] = {{1, 1, 2, 0}, {5, 2, 6,-3}, {-12, 14, 13, 11}};
    int suma = 0;

    for (int a = 0; a < 3; a++)
    {
        int suma = 0;
        for(int b = 0; b < 4; b++){
            suma += array[a][b];
        }
        printf("La suma de elementos de la fila %i es: %i \n", a, suma);
    }

    return 0;
}
