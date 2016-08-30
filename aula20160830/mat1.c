#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, A;

    printf("Entre com os lados do triangulo:\n");
    printf("a e b=\n");
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Entre com o angulo em radianos");
    scanf("%f", &A);

    a= sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(A));

    printf("O outro lado do triangulo e'= %f", a);

    printf("\n\n");


    return 0;

}
