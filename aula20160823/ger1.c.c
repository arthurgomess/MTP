#include <stdio.h>

int main ()
{
    int numero, i;
    printf("Entre com o valor de um numero: ");
    scanf("%d",&numero);
    for(i = 2; i < numero; i++)
    {
        if(numero%i == 0)
        {
            printf("Nao e primo!\n");
            system("pause");
            exit (0);
        }
    }
    printf("E primo!\n");
    return 0;
}
