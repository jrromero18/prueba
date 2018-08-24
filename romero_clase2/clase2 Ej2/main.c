#include <stdio.h>
#include <stdlib.h>
//esto es un arry.
#define LIMITE_ARRAY 3// Es para reemplazar en numero 3 que ponemos en los "i".


int main()
{
    int numero[LIMITE_ARRAY]; //int numero[3];
    int numeroMaximo;
    int numeroMinimo;
    int i;

    for (i=0;i<LIMITE_ARRAY;i++) //  for (i=0;i<3;i++)
    {
        printf("\nNumero %d: ",i+1);
        while(scanf("%d",&numero[i]) != 1)
        {
            printf("\nError - Numero %d:",i+1);
            __fpurge(stdin);
        }
        if (i==0)
        {
            numeroMaximo = numero[i];
            numeroMinimo = numero[i];
        }
        else if(numero[i]> numeroMaximo)
        {
            numeroMaximo = numero[i];
        }
         else if(numero[i]< numeroMinimo)
        {
             numeroMinimo = numero[i];
        }

    }
    printf("Max %d - Min %d ",numeroMaximo,numeroMinimo);

     for (i=0;i<3;i++)
    {
        if(numero[i]> numeroMaximo && numero[i]< numeroMaximo)
        {
            printf("es el del medio %d",numero[i]);
            break; //rompe la estructura repetitiba mas proxima
        }

    }

    return 0;
}
