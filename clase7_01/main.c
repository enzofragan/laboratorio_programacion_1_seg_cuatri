#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3
/*
a) cargar datos (carga aleatoria)
b) modificar:  se ingresa el legajo, lo busca y si lo encuentra modifica la nota1
c) informes
1- los alumnos con promedio 6 o mas
2- el/los alumnos con maximo promedio
3- la/s alumno/s con minimo promedio
4- cantidad de alumnos desaprovados
5- cantidad de alumnos aprovados
6- porcentaje de aprobados y desaprobados
7- mostrar los alumnos juan
8- ordenar alfabeticamente por nombre
9- ordenar por nombre y ante igualdad de nombre por promedio
10- mostrar los alumnos cuyo nombre comience con p
11- ordenar alumnos por sexo
12- realizar un grafico que muestre:
    alumnos entre 15-18(inclusive)
                  19 y 25 (inclusive)
                  26 o mas*/


float calcularPromedio(int ,int ,int );
int cargarAlumnos (char [][50],int [],int [],int [],float [],int );
int mostrarAlumnos (char [][50],int [],int [],int [],float [],int );

int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;

    cargarAlumnos(nombreCompleto,nota1,nota2,nota3,promedio,T);
    mostrarAlumnos(nombreCompleto,nota1,nota2,nota3,promedio,T);


    return 0;
}

float calcularPromedio(int nota1,int nota2,int nota3)
{
    float promedio;

    promedio = (float)(nota1 + nota2 + nota3)/3;

    return promedio;
}

int cargarAlumnos (char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;

    for(i=0; i<T; i++)
    {
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
}

int mostrarAlumnos (char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;

    printf("%20s %6s %6s %6s %8s\n","nombre","nota1","nota2","nota3","promedio");

    for(i=0; i<tam; i++)
    {
        printf("%20s %6d %6d %6d %.2f\n",nombre[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }
}
