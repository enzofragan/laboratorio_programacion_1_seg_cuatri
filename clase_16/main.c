#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    char* pCaracter=NULL;
////////////////ingreso de datos por punteros////////////////////
    pCaracter=&caracter;
    printf("ingrese un caracter ");
    fflush(stdin);
    //*pCaracter= getche();
    scanf("%c",pCaracter);
////////////////muestra de datos por punteros////////////////////
    printf("\nel caracter es: %c",*pCaracter);

    return 0;
}
