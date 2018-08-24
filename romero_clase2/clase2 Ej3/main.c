#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero[5];
    float acumulador;
    int i;

    for (i=0;i<5;i++)
    {
        printf("\nNumero %d: ",i+1);
        while(scanf("%f",&numero[i]) != 1)
        {
            printf("\nError - no es un numero %f:",i+1);
            __fpurge(stdin);


        }
        acumulador = acumulador + numero[i];

    }

    printf("\nEl promedio es: %f",acumulador/5);
    printf("\nLa suma es: %f",acumulador);

    return 0;
}
