#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numero1;
    int pos=0;
    int neg=0;
    int i;

    for(i=0;i<10;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&numero1);

        if(numero1>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    printf("la cantidad de positivos es %d\nla cantidad de negativos es %d",pos,neg);

    /*int numero2;
    int resta;

    printf("ingrese primer numero: ");
    scanf("%d",&numero1);

    if(numero1==0)
    {
        printf("ingrese un numero distinto de 0: ");
        scanf("%d",&numero1);
    }

    printf("ingrese segundo numero: ");
    scanf("%d",&numero2);

    if(numero2==0)
    {
        printf("ingrese un numero distinto de 0: ");
        scanf("%d",&numero2);
    }

    resta=numero1-numero2;

    printf("el resultado es %d",resta);

    if(resta>0)
    {
        printf("\nel resultado es positivo");
    }
    else
    {
        printf("\nel resultado es negativo");
    }*/

    return 0;
}
