#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pNumero;
    int sNumero;
    int tNumero;
    int numeroMaximo;
    int numeroMinimo;


    printf("\nNumero 1: ");

    while(scanf("%d",&pNumero) != 1)
    {
        printf("\nError - Numero1:");
        __fpurge(stdin);

    }

    numeroMaximo = pNumero;
    numeroMinimo = pNumero;

    printf("\nNumero 2: ");
    while(scanf("%d",&sNumero) != 1)
    {
        printf("\nError - Numero2:");
        __fpurge(stdin);

    }
    if(sNumero> numeroMaximo)
    {
        numeroMaximo = sNumero;
    }
    else if (sNumero < numeroMinimo)
    {
        numeroMinimo = sNumero;
    }

    printf("\nNumero 3: ");
    while(scanf("%d",&tNumero) != 1)
    {
        printf("\nError - Numero3:");
        __fpurge(stdin);

    }
    if(tNumero> numeroMaximo)
    {
        numeroMaximo = tNumero;
    }
    else if (tNumero < numeroMinimo)
    {
        numeroMinimo = tNumero;
    }

    printf("Max %d - Min %d ",numeroMaximo,numeroMinimo);

    if (pNumero<numeroMaximo && pNumero > numeroMinimo)
    {
        printf("Es el del medio %d",pNumero);
    }
    else if (sNumero<numeroMaximo && sNumero > numeroMinimo)
    {
        printf("Es el del medio %d",sNumero);
    }
    else if (tNumero<numeroMaximo && tNumero > numeroMinimo)
    {
        printf("Es el del medio %d",tNumero);
    }
    else
    {
        printf("No hay numero del medio");
    }


    return 0;
}
