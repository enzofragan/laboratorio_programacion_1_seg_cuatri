#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float numero2;
    char caracter;

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    printf("ingrese otro numero: ");
    scanf("%f",&numero2);
    fflush(stdin);

    printf("ingrese una letra: ");
    scanf("%c",&caracter);

    printf("el numero ingresado es: %d\nel numero ingresado es: %.2f\nel caracter ingresado es: %c",numero,numero2,caracter);

    //printf("los numeros son: %d\t\a y %.2f \n",numero,numero2);
    // printf("el caracter es; %c",caracter);
    return 0;
}
