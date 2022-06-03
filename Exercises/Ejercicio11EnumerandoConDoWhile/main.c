// Utilizando do while, enumera los numeros hasta el que le indiques
#include <stdlib.h>

int main()
{
    int start = 0;
    int limit;

    printf("Hasta que numero quieres que enumere?\n");
    scanf("%i", &limit);

    do{
        printf("%i\n", start);
        start++;

    }while(start<=limit);

    return 0;
}
