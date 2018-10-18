#include <stdio.h>
#include <stdlib.h>

void cargar(int* ,int );
void mostrar(int* ,int );

int main()
{
    int array[6];

    cargar(array,6);

    mostrar(array,6);

    return 0;
}

void cargar(int* pArray,int  tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese un numero ");
        scanf("%d",pArray+i);
    }
}

void mostrar(int* pArray,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(pArray+i));
    }
}
