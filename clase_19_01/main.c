#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[20]="hola";
    FILE* pArchivo;
    pArchivo=fopen("texto.txt","w");
    fprintf(pArchivo,"%d,como estas?",9);
    fclose(pArchivo);
    return 0;
}
