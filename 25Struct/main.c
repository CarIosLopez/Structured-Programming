#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[40];
    char lastName[40];
    int age;
};

int main()
{
    printf("Estructuras de datos\n");

    struct personalData person;

    printf("Ingresa el nombre: ");
    gets(person.name);

    printf("Ingresa el apellido: ");
    gets(person.lastName);

    printf("Ingresa la edad: ");
    scanf("%i", &person.age);

    printf("Imprimiendo datos...\n");
    printf("%s %s tiene %i años", person.name, person.lastName, person.age);
    printf("Fin del programa!");
    return 0;
}
