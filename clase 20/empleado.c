#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

eEmployee* nuevoEmpleado()
{
    eEmployee* pEmpleado;

    pEmpleado=(eEmployee*) malloc(sizeof(eEmployee));

    return pEmpleado;
}
int emp_setId(eEmployee* empleado,int id)
{
    if(id>0)
    {
        empleado->id=id;
    }

    return 0;
}
