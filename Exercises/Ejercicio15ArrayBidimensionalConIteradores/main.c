/*
Crea un arreglo de 5 filas por 6 columnas en donde:
- Los primeros 5 elementos cada fila tengan calificaciones
aprobatorias entre 6 y 10
- El sexto elemento de cada fila debe ser 0
- Calcula el promedio de los primeros 5 elementos de cada fila
y asignalo al sexto elemento
- Imprime el promedio de cada fila de calificaciones
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Promedio de la suma de los primeros 5 elementos de las columnas y setear el resultado en el ultimo\n");
    printf("\n");


    int array[5][6]= {{7, 6, 8, 10, 10, 0}, {8, 8, 10, 9, 10, 0},
    {7, 8, 6, 9, 10, 0}, {8, 7, 10, 6, 9, 0}, {7, 7, 7, 9, 10, 0}};

    int avg, suma;

    for(int x=0; x < 5; x++){
        suma = 0;
        for(int y=0; y < 5; y++){
            suma += array[x][y];
            printf("Casilla [%i][%i] calificacion: %i\n", x, y, array[x][y]);
        }

        avg = suma/5;
        array[x][6] = avg;
        printf("Fila - %i promedio: %i\n", x+1, array[x][6]);
        printf("\n");
    }
    return 0;
}
