#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define t 5

int main()
{
    int vector[t];
    int suma;
    int opcion;

    iniciarVector(vector,t);

    do{
        printf("1.cargar\n2.mostrar\n3.sumar\n4.salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarVector(vector,t);
            break;

        case 2:
            mostrarVector(vector,t);
            break;

        case 3:
            suma=sumarVector(vector,t);

            printf("la suma es %d\n",suma);
            break;

        }
    }while(opcion!=4);

    return 0;
}
