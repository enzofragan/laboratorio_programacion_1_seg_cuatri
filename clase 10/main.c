#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
    eFecha fechaNacimiento;
}eAlumno;

int main()
{
    eAlumno miAlumno={450,"enzo",5};
    miAlumno.fechaNacimiento.dia=10;
    miAlumno.fechaNacimiento.mes=7;
    miAlumno.fechaNacimiento.anio=2000;

    printf("%d----%s----%f---%d/%d/%d",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio,miAlumno.fechaNacimiento.dia,miAlumno.fechaNacimiento.mes,miAlumno.fechaNacimiento.anio);

    return 0;
}
