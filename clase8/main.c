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
void cargarListado(eAlumno [],int );
void mostrarListado(eAlumno [],int );

int main()
{
    eAlumno otroAlumno[3];
    int opcion;

    do
    {
        printf("1.cargar\n");
        printf("2.mostrar\n");
        printf("10.salir\n");
        printf("elija una opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                cargarListado(otroAlumno,3);
                break;
            case 2:
                mostrarListado(otroAlumno,3);
                break;
        }
    }while(opcion!=10);

    return 0;
}

void mostrarAlumno(eAlumno alumnoParametro)
{
    printf("%d--%s--%.2f\n",alumnoParametro.legajo,alumnoParametro.nombre,alumnoParametro.promedio);
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
void cargarListado(eAlumno listado[],int capacidad)
{
    int i;

    for(i=0;i<capacidad;i++)
    {
        listado[i]=cargarAlumno();
    }

}

void mostrarListado(eAlumno listado[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        mostrarAlumno(listado[i]);
    }
}
