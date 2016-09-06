#include <stdio.h>


int main (){

    int i, j, vet[10], soma=0, produto=1;

    printf("Preencha o vetor:\n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (j = 0; j <10 ; j++)
    {
        soma=soma+vet[i];
        produto=produto*vet[i];
    }

    printf(" A soma destes elementos do vetor= %d", soma);
    printf("\n O produto destes elementos do vetor= %d", produto, "\n\n");

    return 0;
}
