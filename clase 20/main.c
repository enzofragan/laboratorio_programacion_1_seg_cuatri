#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

int main()
{
    eEmployee* listaEmpleado[3];
    int i;

    //empleado = nuevoEmpleado();
    parser(listaEmpleado);

    for(i=0;i<3;i++)
    {

            printf("%d---%s---%f\n",(*(listaEmpleado+i))->id, (*(listaEmpleado+i))->nombre,(*(listaEmpleado+i))->sueldo);

    }

    return 0;
}
