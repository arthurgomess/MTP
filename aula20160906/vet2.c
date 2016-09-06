#include <stdio.h>


int main (){

    int i, j, vet[10];

    printf("Preencha o vetor:\n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (j = 9; j >= 0; j--)
    {
        printf("%d ", vet[j]);
    }

    printf("\n");


    return 0;
}
