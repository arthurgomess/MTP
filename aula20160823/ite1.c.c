#include <stdio.h>

int main () {
    int numero, fatorial = 1, i;
    printf("Entre com o valor de um numero: ");
    scanf("%d",&numero);
    for(i = 2; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    printf("O fatorial do numero e: %d", fatorial);
    return 0;

}

