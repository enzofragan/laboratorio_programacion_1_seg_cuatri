#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int menu()
{
    int opcion;

    printf("1- cargar alumno\n");
    printf("2- \n");
    printf("3- \n");
    printf("4- \n");
    printf("5- \n");
    printf("6- \n");
    printf("7- \n");
    printf("8- \n");
    printf("9- Salir\n");

    opcion=getInt("","ingrese una opcion valida ");

    return opcion;
}

int cargarAlumnos(char nombre[][50],char sexo,int nota1[],int nota2[],int nota3[],float promedio[],int legajo[],int tam[])
{
    int pos;
    int ret=-1;

    system("pause");
    system("cls");

    printf("ingrese la posicion del dato: ");
    scanf("%d",&pos);

    if(pos>0)
    {
       legajo[pos-1]=getInt("ingrese un legajo: ","ingrese una dato valido");

        getString("ingrese su nombre: ","ingrese una dato valido",nombre[pos-1]);

        sexo=getChar("ingrese su sexo: m(hombre) o f(mujer)","ingrese una dato valido");

        nota1[pos-1]=getInt("ingrese la primera nota: ","ingrese una dato valido");

        nota2[pos-1]=getInt("ingrese la segunda nota: ","ingrese una dato valido");

        nota3[pos-1]=getInt("ingrese la tecera nota: ","ingrese una dato valido");

        promedio[pos-1]=calcularPromedio(nota1[pos-1],nota2[pos-1],nota3[pos-1]);

        ret=1;
    }

    return ret;
}

int getInt(char mensaje[],char error[])
{
    int aux;
    char buffer[64];
    printf("%s",mensaje);
    fflush(stdin);
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
char getString(char mensaje[],char error[],char caracter[])
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(caracter);
    while(esLetra(caracter)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        gets(caracter);
    }

    return caracter;
}
int esLetra(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isalpha(cadena[i])))
            {
                return -1;
            }
            i++;
        }
    }
    return 1;
}
char getChar(char mensaje[],char error[])
{
    char auxiliar;
    char buffer[64];
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",buffer);
    while(esLetra(buffer)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        scanf("%s",buffer);
    }
    auxiliar=buffer;

    return auxiliar;
}
float calcularPromedio(int nota1,int nota2,int nota3)
{
    float promedio;

    promedio = (float)(nota1 + nota2 + nota3)/3;

    return promedio;
}
