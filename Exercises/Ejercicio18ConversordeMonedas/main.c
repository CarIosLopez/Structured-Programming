// Cambiar de dolares a mxn y de mxn a dolares usando funciones

#include <stdio.h>
#include <stdlib.h>

float dolarestomxn(float actMoney, float mxn)
{
    return actMoney*mxn;
}

float mxntousd(float actMoney, float mxn)
{
    return actMoney/mxn;
}

int main()
{

    float mxn = 19.86, actMoney;
    int option;

    printf("Conversor de monedas\n");
    printf("*****Menu de opciones*****\n");
    printf("Presiona 1 si quieres cambiar de dolares a pesos mexicanos\n");
    printf("Presiona 2 si quieres cambiar de pesos mexicanos a dolares\n");
    scanf("%i", &option);
    if(option == 1){
        printf("Cuantos dolares tienes?\n");
        scanf("%f", &actMoney);
        printf("Tienes: %f pesos mexicanos\n", dolarestomxn(actMoney, mxn));
    }
    if(option == 2){
        printf("Cuantos pesos mexicanos tienes?\n");
        scanf("%f", &actMoney);
        printf("Tienes: %f dolares\n", mxntousd(actMoney, mxn));
    }

    else
        printf("Ingres una opcion correcta");

    return 0;
}
