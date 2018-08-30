#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getInt(int* );
int esNumerica(char* );
int getChar(char* );
int esLetra(char* );

int main()
{
    int num;
    char letra;

    printf("ingrese un numero: ");
    if(getInt(&num)==-1) //if(getInt(&num)==-1)
    {
        printf("error");
    }
    else
    {
        printf("%d",num);
        //printf("%c",letra);
    }
    fflush(stdin);
    return 0;
}

int getInt(int* pResultado)
{
    int ret=-1;
    char buffer[64];
    scanf("%s",buffer);
    if(esNumerica(buffer)==1)
    {
        *pResultado = atoi(buffer);
        ret=1;
    }
    return ret;
}

int esNumerica(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            /*if(!(isalpha(cadena[i])))
            {
                return -1;
            }*////para validar letra
            if(!(isdigit(cadena[i])))
            {
                return -1;
            }///para validar numero
            i++;
        }
    }
    return 1;
}
/*int getChar(char* pLetra)
{
    int ret=-1;
    char buffer[64];
    scanf("%s",buffer);
    if(esLetra(buffer)==1)
    {
        *pLetra = buffer;
        ret=1;
    }
    return ret;
}*/

int esLetra(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isalpha(cadena[i])))
            {
                return -1;
            }///para validar letra
            /*if(!(isdigit(cadena[i])))
            {
                return -1;
            }*////para validar numero
            i++;
        }
    }
    return 1;
}
