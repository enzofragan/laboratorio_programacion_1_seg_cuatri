#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int* vector;
    int* pAux;
    int i;

    vector =(int*) malloc(sizeof(int)*T);///se encarga de buscar espacio en memoria y reserva el tamaño de lo que se quiere reservar
    //vector =(int*) calloc(sizeof(int),T);///lo mismo que malloc pero incializa en 0
    if(vector!=NULL)
    {
        for(i=0; i<T; i++)
        {
            *(vector+i)=i+1;
        }

        for(i=0; i<T; i++)
        {
            printf("%d\n",*(vector+i));
        }

        pAux = realloc(vector,sizeof(int) * (T+5));///para agrandar
        ///agrega mas espacio en memoria a la variable sin afectar a los datos,recibiendo lo que se quiere expandir y el tamaño que se tiene mas lo que se quiere
        if(pAux!=NULL)
        {
            vector=pAux;
            for(i=T; i<T+5; i++)
            {
                *(vector+i)=i+1;
            }

            for(i=T; i<T+5; i++)
            {
                printf("%d\n",*(vector+i));
            }


            vector = realloc(vector,sizeof(int)*3);///para hachicar

            for(i=0; i<3; i++)
            {
                printf("\n%d\n",*(vector+i));
            }

        }
    }
    else
    {
        printf("no hay espacio");
    }



    return 0;
}
