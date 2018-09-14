#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define T 3

int main()
{
    int legajo[T];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    char sexo;
    int max;
    int min;
    int aprobados;
    int desaprobados;
    int porcentaje;
    char nombreCompleto[T][50];
    int cargar;
    int opcion;
    char seguir='s';

    do{

        opcion=menu();

        switch(opcion)
        {
            case 1:
                cargar=cargarAlumnos(nombreCompleto,sexo,nota1,nota2,nota3,promedio,legajo,T);
                if(cargar==1)
                {
                    printf("la cargar se completo\n");
                    system("pause");
                    system("cls");
                }
                break;
            case 9:
                seguir='n';
                break;
        }
    } while(seguir=='s');

    return 0;
}
