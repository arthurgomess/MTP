#include <stdio.h>
#include <time.h>

int main(void)
{
    int numero, aleatorio;

    srand(time(0));
    aleatorio = rand()%100;

    printf("Informe um numero inteiro que voce acha que e: ");
    scanf("%d",&numero);

    if(numero == aleatorio)
    {
        printf("Voce acertou!\n");
    }
    else
    {
        while(numero != aleatorio)
        {
            printf("Voce errou!");
            if(numero > aleatorio)
            {
                printf("Alto\n");
            }
            else
            {
                printf("Baixo\n");
            }
            printf("\nInforme outro numero: ");
            scanf("%d",&num);
        }
        if(numero == aleatorio)
        {
            printf("Voce acertou!");
        }
    }

    return 0;
}