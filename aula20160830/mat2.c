#include <stdio.h>
#include <math.h>

int main()
{
    float num, base, res;

    printf("Entre com o numero e base que quer o log\n");
    printf("numero= ");
    scanf("%f", &num);
    printf("base= ");
    scanf("%f", &base);

   res=(log(num)/log(base));

    printf("\nO log de %f na base %f e'= %f", num, base, res);

    printf("\n\n");


    return 0;

}
