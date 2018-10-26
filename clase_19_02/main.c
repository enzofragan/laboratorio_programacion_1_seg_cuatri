#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[20];
    FILE* pArchivo;
    pArchivo=fopen("texto","r");
    //fprintf(pArchivo,"hola");
    fgets(palabra,20,pArchivo);
    fclose(pArchivo);
    puts(palabra);
    return 0;
}
