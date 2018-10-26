#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1[20];
    char p2[20];
    FILE* pArchivo;
    pArchivo=fopen("texto.txt","r");
/////////////escritura/////////////////
    /*fprintf(pArchivo,"hola :3\n");
    fprintf(pArchivo,"y chau \n");*/
/////////////lectura/////////////////
    fgets(p1,20,pArchivo);
    puts(p1);
    fgets(p2,20,pArchivo);
    puts(p2);
    fclose(pArchivo);
    return 0;
}
