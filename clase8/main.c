#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int legajo;
    char nombre[50];
    float promedio;

} eAlumno;

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();

int main()
{
    eAlumno otroAlumno;

    otroAlumno=cargarAlumno();

    mostrarAlumno(otroAlumno);

    return 0;
}

void mostrarAlumno(eAlumno alumnoParametro)
{
    printf("%d--%s--%.2f",alumnoParametro.legajo,alumnoParametro.nombre,alumnoParametro.promedio);
}

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("ingrese prmedio: ");
    scanf("%f",&miAlumno.promedio);

    return miAlumno;
}
