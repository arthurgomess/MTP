#include <stdio.h>

int main(void)
{
    int auxiliar, numero, soma=0;
    scanf("%d",&numero);
    auxiliar = numero-1;

    while(auxiliar > 0)
    {
        if(numero%auxiliar == 0)
            soma += auxiliar;
        auxiliar--;
    }
    if(soma == numero && numero != 0)
        printf("O numero e perfeito!",numero);
    else
        printf("O numero nao e perfeito!\n",numero);

    return 0;
}