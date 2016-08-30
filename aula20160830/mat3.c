#include <stdio.h>
#include <math.h>

int main()
{
    int num, fat=1, i;

    printf("Entre com o numero que quer calcular o fatorial\n");
    printf("numero= ");
    scanf("%i", &num);

    for(i=num; i!=1; i--)
    {
        fat=fat*i;
    }

    printf("\nO fatorial de %i e'= %i", num, fat);

    printf("\n\n");

    return 0;

}
