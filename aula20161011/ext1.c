#include <stdio.h>

float media(int vet[], int n);
int maior(int vet[], int n);
int menor(int vet[], int n);

int main()
{
    int vet[50], n=0, opc;

    do
    {

        printf("Entre com um numero \n");
        scanf("%d", &vet[n]);
        n++;
        printf("Media= %f", media(vet, n));
        printf("\nMaior= %f", maior(vet, n));
        printf("\nMenor= %f\n", menor(vet, n));


        printf("\n\n1 para inserir novo numero ou 0 para sair ");
        scanf("%i", &opc);
    }while(opc!=0);


    return 0;
}

float media(int vet[], int n)
{
    int i, soma=0;
    for(i=0; i<n; i++)
    {
        soma=soma+vet[i];
    }
    return soma/n;
}

int maior(int vet[], int n)
{
    int MAIOR=vet[0], j;

    for(j=0; j<n; j++)
    {
        if(vet[j]>MAIOR)
        {
            MAIOR=vet[j];
        }
    }
    return MAIOR;
}

int menor(int vet[], int n)
{
    int MENOR=vet[0], k;
    for(k=0; k<n; k++)
    {
        if(vet[k]<MENOR)
        {
            MENOR=vet[k];
        }
    }
    return MENOR;
}
