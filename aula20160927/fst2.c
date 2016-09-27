#include <stdio.h>

void soma(float num1, float den1,float num2,float den2);
int main()
{
    float num1, den1, num2, den2;

    printf("Entre com o numerador e denominador da primeira fracao:\n");
    scanf("%f/%f", &num1, &den1);
    printf("\nEntre com o numerador e denominador da segunda fracao:\n");
    scanf("%f/%f", &num2, &den2);

    if((den1 || den2)==0 )
    {
        printf("\n\nOpcao invalida\n\n");
    }

    else
        soma(num1, den1, num2, den2);

    return 0;
}

void soma(float num1, float den1,float num2,float den2)
{
    float num, den, pt1, pt2;

    den=den1*den2;
    pt1=(den/den1)*num1;
    pt2=(den/den2)*num2;
    num=pt1+pt2;

    printf("\nO rsultado da divisao e'= %g/%g", num, den);

}
