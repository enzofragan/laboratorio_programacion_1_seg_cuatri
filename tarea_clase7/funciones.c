#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int menu()
{
    int opcion;

    printf("1- \n");
    printf("2- \n");
    printf("3- \n");
    printf("4- \n");
    printf("5- \n");
    printf("6- \n");
    printf("7- \n");
    printf("8- \n");
    printf("9- Salir\n");

    opcion=getInt("ingrese una opcion valida ");

    return opcion;
}

int cargarAlumnos(char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int legajo[],int tam[])
{
    int pos;

        printf("ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("ingrese nota 1: ");
        scanf("%d",&nota1[i]);

        printf("ingrese nota 2: ");
        scanf("%d",&nota2[i]);

        printf("ingrese nota 3: ");
        scanf("%d",&nota3[i]);

        promedio[i] = calcularPromedio(nota1[i],nota2[i],nota3[i]);

}

int getInt(char error[])
{
    int aux;
    char buffer[64];
    scanf("%s",buffer);
    while(esNumerica(buffer)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        scanf("%s",buffer);
    }
    aux = atoi(buffer);
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
