#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "persona.h"

eAlumno* alumno_nuevo()
{
    eAlumno* pAlumno;

    pAlumno=(eAlumno*) malloc(sizeof(eAlumno));

    return pAlumno;
}

eAlumno* alumno_nuevoParametro(int id,char* nombre,float altura)
{
    eAlumno* pAlumno;
    pAlumno=alumno_nuevo();

    if(pAlumno!=NULL)
    {
        pAlumno->id=id;
        pAlumno->altura=altura;
        strcpy(pAlumno->nombre,nombre);
    }

    return pAlumno;
}

void alumno_mostrar(eAlumno* pAlumno)
{
    printf("%d",pAlumno->id);
}

eAlumno* alumno_alta()
{
    char idAux[30];
    int id;
    char nombreAux[30];
    char alturaAux[30];
    eAlumno* pAlumno;

    printf("ingrese su id: ");
    fflush(stdin);
    gets(idAux);

    id=alumno_setId(idAux);

    while(id<0)
    {
        printf("ingrese su id: ");
        fflush(stdin);
        gets(idAux);

        id=alumno_setId(idAux);
    }

    pAlumno=alumno_nuevoParametro(id,"",0.00);

    return pAlumno;
}

int alumno_setId(char* cadena)
{
    int aux=0;
   // int ret=1;

    while(!(esNumerica(cadena)))
    {
        aux=-1;
        break;
    }

    if(aux==0)
    {
        aux=atoi(cadena);
    }

    return aux;
}

int esNumerica(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isdigit(cadena[i])))
            {
                return -1;
            }///para validar numero
            i++;
        }
    }
    return 1;
}
