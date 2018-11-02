#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#define T 3

eEmployee* nuevoEmpleado()
{
    eEmployee* pEmpleado;

    pEmpleado=(eEmployee*) malloc(sizeof(eEmployee));

    return pEmpleado;
}
int emp_setId(eEmployee* empleado,int id)
{
    if(empleado!=NULL && id>0)
    {
        empleado->id=id;
    }

    return id;
}

int emp_setNombre(eEmployee* empleado,char* nombre)
{
    if(empleado!=NULL)
    {
        strcpy(empleado->nombre,nombre);
    }

    return 0;
}

int emp_setSueldo(eEmployee* empleado,float sueldo)
{
    if(empleado!=NULL)
    {
        empleado->sueldo=sueldo;
    }

    return 0;
}

void parser(eEmployee* empleado[])
{
    FILE* archivo;
    eEmployee* pAux;
    int r;
    int i=0;
    int id;
    char nombre[50];
    float sueldo;
    char var1[50];
    char var2[50];
    char var3[50];

    archivo=fopen("MOCK_DATA.csv","r");

    if(archivo!=NULL && empleado!=NULL)
    {
         r=fscanf(archivo,"%[^,],%[^,],%[^\n]\n",var1,var2,var3);
        do{
            r=fscanf(archivo,"%[^,],%[^,],%[^\n]\n",var1,var2,var3);

            if(r==3)
            {
                id=atoi(var1);
                strcpy(nombre,var2);
                sueldo=atof(var3);
                pAux=nuevoEmpleado();
                emp_setId(pAux,id);
                emp_setNombre(pAux,nombre);
                emp_setSueldo(pAux,sueldo);
                //printf("%d--%s--%f\n",pAux->id,pAux->nombre,pAux->sueldo);
                empleado[i] = pAux;
                i++;
            }
        }while(!feof(archivo));
    }
}
