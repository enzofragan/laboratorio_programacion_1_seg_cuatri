#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    int numero;
    pArchivo=fopen("archivoBinario.dat","rb");
    ///fread(puntero donde se guarda el dato,cantidad de bytes,cantidad de elementos,archivo);
    fread(&numero,sizeof(int),1,pArchivo);
    fclose(pArchivo);
    printf("el numero es %d",numero);
    ///fwrite(el nombre de la variable o puntero,tamanio de variable,cantidad de elementos de ese tipo,puntero al archivo);
   /* fwrite(&numero,sizeof(int),1,pArchivo);
    fclose(pArchivo);*/
    return 0;
}
