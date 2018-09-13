#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;


    for(i=0; i<T; i++)
    {
        printf("ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("ingrese nota 1: ");
        scanf("%d",&nota1[i]);

        printf("ingrese nota 2: ");
        scanf("%d",&nota2[i]);

        printf("ingrese nota 3: ");
        scanf("%d",&nota3[i]);

        promedio[i] = (float)(nota1[i] + nota2[i] + nota3[i])/T;
    }

    printf("%20s %6s %6s %6s %8s\n","nombre","nota1","nota2","nota3","promedio");

    for(i=0; i<T; i++)
    {
        printf("%20s %6d %6d %6d %.2f\n",nombreCompleto[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }
    return 0;
}
