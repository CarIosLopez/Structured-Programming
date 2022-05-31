#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos, creacion de un archivo\n");

    FILE *archivo;

    archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf("El archivo se a creado exitosamente. Comprueba en la carpeta donde ha sido creado\n");
        fclose(archivo);
    }
    else
    {
        printf("El archivo no se a creado");
    }
}
