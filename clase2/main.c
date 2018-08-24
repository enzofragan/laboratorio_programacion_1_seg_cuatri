#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int pos=0;
    int neg=0;
    int sumPos=0;
    int sumNeg=0;
    int ceros=0;
    int par=0;
    float promPos=0;
    float promNeg=0;
    int dif;
    int max=0;
    int min=0;
    char resp;
    do{
        printf("ingrese numero: ");
        scanf("%d",&numero);
        fflush(stdin);

        if(numero>0)
        {
            pos++;
            sumPos=sumPos+numero;
        }
        else if(numero<0)
        {
            neg++;
            sumNeg=sumNeg+numero;
        }
        else
        {
            ceros++;
        }

        if(numero%2==0 && numero!=0)
        {
            par++;
        }

        if (pos>neg)
        {
            dif=pos-neg;
        }
        else
        {
            dif=neg-pos;
        }

        if(numero>max)
        {
            max=numero;
        }

        if(numero<min)
        {
            min=numero;
        }

        printf("desea continuar? y/n ");
        setbuf(stdin,NULL);
        scanf("%c",&resp);
    }while(resp=='y');
    promPos= (float)sumPos/pos;
    promNeg= (float)sumNeg/neg;

    system("cls");

    printf("la suma de los positivos es: %d\nla suma de los negativos es: %d\nla cantidad de positivos es %d\nla cantidad de negativos es %d\nla cantidad de ceros es %d\nla cantidad de pares es %d\nel promedio de los positivos es: %.2f\nel promedio de los negativos es: %.2f\nla diferencia entre positivo y negativo es de: %d\nel numero maximo es %d\nel numero minimo es %d",sumPos,sumNeg,pos,neg,ceros,par,promPos,promNeg,dif,max,min);
    return 0;
}
