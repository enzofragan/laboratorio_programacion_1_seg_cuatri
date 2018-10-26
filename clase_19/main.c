#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    pArchivo=fopen("texto.txt","w");
    fprintf(pArchivo,"hola :3");
    fclose(pArchivo);
    return 0;
}
