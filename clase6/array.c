#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void cargarVector(int vector[],int tam)
{
    char seguir;
    int posicion;
    do{
        printf("ingrese posicion: ");
        scanf("%d",&posicion);

        printf("ingrese un valor: ");
        scanf("%d",&vector[posicion-1]);

        printf("desea seguir? ");
        fflush(stdin);
        scanf("%c",&seguir);
    }while(seguir=='s');
}

void mostrarVector(int vector[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vector[i]!=-1)
        {
            printf("%d\n",vector[i]);
        }
    }
}

void iniciarVector(int vector[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        vector[i]=-1;
    }
}
int sumarVector(int vector[],int tam)
{
    int acumulador=0;
    int i;

    for(i=0;i<tam;i++)
    {
        if(vector[i]!=-1)
        {
            acumulador=acumulador+vector[i];
        }
    }

    return acumulador;
}
