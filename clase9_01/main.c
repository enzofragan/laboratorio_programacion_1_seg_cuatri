#include <stdio.h>
#include <stdlib.h>

void inicializarVector(int [],int );
int buscarLibre(int [],int ,int );

int main()
{
    int array[5];
    int i;
    char seguir;
    int indice;

    inicializarVector(array,5);

    do
    {
        indice=buscarLibre(array,5,-1);

        if(indice!=-1)
        {
            printf("\ningrese un numero: ");
            scanf("%d",&array[i]);
        }
        else
        {
            printf("\nno hay lugar");
            break;
        }

        printf("desea ingresar otro? ");
        seguir=getche();

    }while(seguir=='s');

    return 0;
}

void inicializarVector(int vector[],int a)
{
    int i;

    for(i=0;i<a;i++)
    {
        vector[i]=-1;
    }
}

int buscarLibre(int vector[],int a,int valor)
{
    int indice=-1;
    int i;

    for(i=0;i<a;i++)
    {
        if(vector[i]==valor)
        {
            indice=i;
            break;
        }
    }

    return indice;
}
