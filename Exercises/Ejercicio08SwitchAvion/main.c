/*
Realizaremos un pequeño juego de texto:

- Haz una introducción con tres opciones a elegir, numeradas del 1 al 3
- Cada una de ellas te debe de imprimir un resultado distinto en la historia
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Te encuentras en un avion en medio del mar con tu madre y tu pareja\n");
    printf("****Se escucha una fuerte explosion fuera del avion****\n");
    printf("El capitan del vuelo les informa que debido a una explosion, el avion se estrellara\n");
    printf("Hay un paracaidas y tu tomaras la decision sobre quien lo usara\n");
    printf("Escribe 1 si usarias el paracaidas\n");
    printf("Escribe 2 si deseas darle el paracaidas a tu madre\n");
    printf("Escribe 3 si deseas darle el paracaidas a tu pareja\n");

    int option;

    scanf("%i", &option);

    switch(option){
    case 1:
        printf("Saltaste del avion en pleno mar, estas a salvo(por ahora)\n");
        printf("El avion logro aterrizar en una isla poco despues de que saltaste, estan a salvo\n");
        printf("Nunca te encontraron, lo que nadie se entero fue que te devoraron unos tiburones\n");
        break;

    case 2:
        printf("Tu madre salto del avion en pleno mar\n");
        printf("Los aviones estan diseñados para aterrizar en el agua y flotar el tiempo suficiente en lo que llega ayuda\n");
        printf("Tu madre murio ahogada, el resto de pasajeros, tu pareja y tu siguen con vida, que alivio!\n");
        break;

    case 3:
        printf("Salto tu pareja en pleno mar, el paracaidas no se abrio, murio del golpe\n");
        printf("El avion logro aterrizar en una isla poco despues de que salto tu pareja\n");
        printf("Una tribu local les dio la bienvenida, para tu desgracia eran una tribu canibal, todos han muerto\n");
        break;

    default:
        printf("Como no pudiste tomar una decision, uno de los tripulantes te arrebato el paracaidas y salto, el avion se estrello, haz muerto");
        break;
    }
    return 0;
}
