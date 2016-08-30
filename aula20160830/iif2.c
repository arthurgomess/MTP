#include <stdio.h>
#include <math.h>

int main()
{
    float num, res1=0;
    double res2=0;
    int i;


    printf("Entre com o numero=");
    scanf("%f", &num);
    num=pow(num, -1);


    for(i=0; i<729; i++)
    {
        res1=res1+num;
        res2=res2+num;
    }

    printf("\nO resultado float e'= %.15g", res1);
    printf("\nO resultado double e'= %.15g", res2);

    printf("\n\n");

    return 0;

}
