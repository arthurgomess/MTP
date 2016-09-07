#include <time.h>
#include <stdio.h>
#define NUM 10

int main()
{
    srand(time(0));

    int i, num,min,max;

    printf("Maximo e minimo\n");

    printf("Entre com 1 numero inteiro nao negativo: ");
    scanf("%d",&num);

    int vetor[num];

    for(i=0; i<num; i++)
    {
        vetor[i] = rand()%10;
    }
    
	min = vetor[0];
    
	for(i=0; i<num; i++)
    {
        if(min > vetor[i])
        {
            min = vetor[i];
        }
              if(max < vetor[i])
        {
            max = vetor[i];
        }
    }
    
	printf("\nMaximo valor do vetor: %d\nMinimo valor do vetor: %d\n\n",max,min);
    
    return 0;
}
