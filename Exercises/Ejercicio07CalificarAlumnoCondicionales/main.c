/*
- Haz un programa que reciba la calificacion de un alumno
- Si el alumno saco menos de 60, imprime que esta reprobado
- Si saco mas de 60, imprime que esta aprobado
- Si el alumno saco mas de 90, imprime que esta aprobado
agrega tu toque personal como maestro
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calificacion;

    printf("Hola! Puedo indicar si un alumno pudo aprobar o no si me das su calificación\n");
    printf("Ingresa una calificacion:\n");
    scanf("%i",&calificacion);

    if(calificacion >= 90)
        printf("Felicitaciones al alumno, ha aprobado con una gran nota :)");
    else if(calificacion >= 60)
        printf("El alumno ha aprobado");
    else
        printf("El alumno ha reprobado");


    return 0;
}
