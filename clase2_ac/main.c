#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numero;
    int acu=0;
    int promedio;
    int max=INT_MIN;
    int min=INT_MAX;
    int i;

    for(i=0;i<5;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&numero);

        acu=acu+numero;

        if(numero>max)
        {
            max=numero;
        }

        if(numero<min)
        {
            min=numero;
        }
    }

    promedio=acu/5;

    printf("el promedio es de %d\nel maximo es %d\nel minimo es %d",promedio,max,min);
    return 0;
}
