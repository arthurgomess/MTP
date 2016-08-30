#include <stdio.h>
#include <complex.h>

int main()
{
    float a1, b1, a2, b2, a, b;

    printf("Entre com a parte real e imaginaria do primeiro numero\n");
    scanf("%f", &a1);
    scanf("%f", &b1);
    printf("Entre com a parte real e imaginaria do segundo numero\n");
    scanf("%f", &a2);
    scanf("%f", &b2);

    a=a1+a2;
    b=b1+b2;

    printf("%.2f + %.2f*i\n",a,b);


    printf("\n\n");
    return 0;

}
