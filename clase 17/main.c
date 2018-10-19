#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int entero;
    char caracter;
} eDato;

eDato* constructor();

int main()
{
    eDato* pEstructura;
    int i;

    pEstructura=constructor();

    for(i=0; i<2; i++)
    {
        printf("%d--%c\n",(pEstructura+i)->entero,(pEstructura+i)->caracter);
    }

    return 0;
}

eDato* constructor()
{
    eDato* pEstructura;
    eDato* pAux;
    int i;

    pEstructura =(eDato*) malloc(sizeof(eDato));
    //pEstructura =(eDato*) calloc(sizeof(eDato),2);

    if(pEstructura!=NULL)
    {
        /*pEstructura->entero=9;
        pEstructura->caracter='a';
        printf("%d--%c\n",pEstructura->entero,pEstructura->caracter);*/

        pAux =(eDato*) realloc(pEstructura,sizeof(eDato) * (1+1));

        if(pAux!=NULL)
        {
            pEstructura=pAux;
            for(i=0; i<1+1; i++)
            {
                printf("ingrese un numero: ");
                scanf("%d",&(pEstructura+i)->entero);

                printf("ingrese un caracter: ");
                fflush(stdin);
                scanf("%c",&(pEstructura+i)->caracter);
            }
        }
    }

    /*printf("ingrese un numero: ");
    scanf("%d",&pEstructura->entero);

    printf("ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",&pEstructura->caracter);*/

    return pEstructura;
}
