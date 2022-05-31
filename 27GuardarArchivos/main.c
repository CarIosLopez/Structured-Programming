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
    printf("Guardar y leer un archivo\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales.dat", "rb");

    if(archivo != NULL)
    {
        fread(&person, sizeof(person), 1, archivo);

		printf("Imprimir los datos. \n\n");
        printf("Nombre: %s \n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n", person.age);

		fclose(archivo);
    }
    else
    {
        printf("No se a podido crear el archivo");
    }


    return 0;
}
