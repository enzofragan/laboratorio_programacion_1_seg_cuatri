#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;*/

typedef struct
{
    int id;
    char nombre[30];
    int duracion;
    char profesor[30];
}eCurso;

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
}eAlumno;

void iniciarCurso(eCurso* ,int );
void mostrarCurso(eCurso);
void mostrarTodosCursos(eCurso [],int );

int main()
{
    eAlumno miAlumno={450,"enzo",5};

    printf("%d----%s----%f",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);

    return 0;
}

void iniciarCurso(eCurso* curso,int tam)
{
    int id[3]={100,101,102};
    char nombre[30][3]={"php","c#","vb"};
    int duracion[3]={3,5,6};
    char profesor[30][3]={"cristian","octavio","maxi"};
    int i;

    for(i=0;i<3;i++)
    {
        curso[i].id=id[i];
        curso[i].duracion=duracion[i];
        strcpy(curso[i].nombre,nombre[i]);
        strcpy(curso[i].profesor,profesor[i]);
    }
}

void mostrarCurso(eCurso curso)
{
    printf("%d---%s----%d-----%s",curso.id,curso.nombre,curso.duracion,curso.profesor);
}

void mostrarTodosCursos(eCurso cursos[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        mostrarCurso(cursos[i]);
    }
}
