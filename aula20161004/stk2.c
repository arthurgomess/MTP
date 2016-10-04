#include <stdio.h>
#include <math.h>
#define N 5

float numeros(float vet[])
{
    int i;
    float soma=0;

    for(i=0; i<N; i++)
    {
        scanf("%f", &vet[i]);
        soma=soma+vet[i];
    }

    return soma;
}

float media(float vet[])
{
    float m=(numeros(vet)/N);
    return m;
}

float desvio(float vet[])
{
    float soma2=0, des;
    int i;

    for(i=0; i<N; i++)
    {
        soma2=pow((vet[i]-media(vet)), 2);
    }

    des=sqrt(soma2/N);

    return des;

}

int main()
{

    float vet[N];

    printf("Entre com os numeros: ");
    numeros(vet);

    printf("\nMedia e igual há: %g", media(vet));
    printf("\nDesvio padra= %g", desvio(vet));
    return 0;
}









