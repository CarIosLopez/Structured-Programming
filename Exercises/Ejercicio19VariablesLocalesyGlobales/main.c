/*
- Utilizando variables globales ingresa el nombre de un alumno y su calificacion
- En una funcion evalua si el alumno ha sido aprobado o no(para aprobar es 7)
- Imprime desde la funcion si el alumno aprobo
*/

#include <stdio.h>
#include <stdlib.h>

char name[40];
float score;

void calification()
{
    if(score >= 70)
    {
        printf("El alumno ha aprobado con %f", score);
    }
    if(score < 70)
    {
        printf("El alumno no ha aprobado con %f", score);
    }
}

main()
{
    printf("Evaluador!\n");
    printf("Ingresa el nombre del alumno: ");
    scanf("%s", &name);
    printf("Ingresa el puntaje del alumno: ");
    scanf("%f", &score);

    calification();

    return 0;
}

