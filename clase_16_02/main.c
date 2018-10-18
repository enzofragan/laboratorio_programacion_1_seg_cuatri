#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int entero;
    char caracter;
}eDato;

int main()
{
    eDato miDato[2] ={{1,'b'},{1,'c'}};
    //eDato miDato ={1,'b'};
    eDato* pDato;
    int i;

    pDato = miDato;

    for(i=0;i<2;i++)
    {
        printf("%d--%c\n", (*(pDato+i)).entero,(*(pDato+i)).caracter);
        printf("%d--%c\n", (pDato+i)->entero,(pDato+i)->caracter);
    }
   /* pDato = &miDato;

    printf("%d--%c\n",(*pDato).entero,(*pDato).caracter);

    printf("%d--%c\n",pDato->entero,pDato->caracter);*/

    return 0;
}
