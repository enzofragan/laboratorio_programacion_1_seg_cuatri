#include <stdio.h>
#include <stdlib.h>
#define t 5

int main()
{
    int miVector[5]={2,6,1,3,4};
    int i,j;
    int aux;
   // int flag=0;

    for(i=0;i<t-1;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(miVector[i]>miVector[j])
            {
                aux=miVector[i];
                miVector[i]=miVector[j];
                miVector[j]=aux;
            }
        }
    }

    /*for(i=0;i<5;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&miVector[i]);
    }
    printf("ingrese el numero a buscar: ");
    scanf("%d",&aux);

    for(i=0;i<5;i++)
    {
        if(aux==miVector[i])
        {
            flag=1;
            printf("\nse en contro en la posicion %d",i);
            break;
        }
    }*/

    printf("\nnumeros ingresados:");

    for(i=0;i<5;i++)
    {
        printf("\n%d",miVector[i]);
    }

    printf("\nnumeros pares: ");

    for(i=0;i<5;i++)
    {
        if(miVector[i]%2==0)
        {
            printf("\nel numero %d es par",miVector[i]);
        }
    }

    /*if(flag==0)
    {
        printf("\nno se encontro el numero");
    }*/


    return 0;
}
