#include <stdio.h>
#include <stdlib.h>

/** \brief incrementa el valor en 10
 *
 * \param int el valor sobre el que voy a incrementar
 * \return int [1] si el valor es mayor que 15 y [0] si no lo es
 *
 */
int miFuncion(int* );

int main()
{
    int miEntero=3;
    int estado;

    estado=miFuncion(&miEntero);

    printf("el nuevo numero es %d\n",miEntero);

    if(estado==1)
    {
        printf("el valor es mayor a 15");
    }
    else
    {
        printf("el valor es menor o igual");
    }

    return 0;
}

int miFuncion(int* pValor)
{
    int retorno=0;
    int aux;

    aux= (*pValor);

    aux += 10;

    if(aux>15)
    {
        retorno=1;
    }

    (*pValor) = aux;

    ///(*pValor) += 10;

    /**if(*pValor>15)
    {
        retorno=1;
    }*/

    return retorno;
}
