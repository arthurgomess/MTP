#include <stdio.h>
#include <ctype.h>
#include <math.h>


void numero(char tipo, void * endereco);

int main()
{
	int numero;
	
	srand(time(0));
	printf("Entre com um numero de 1 a 10: ");
	scanf("%d", &numero);
	
	sorteio(numero);
	
	
	return 0;
}

void sorteio(int num)
{
	int sorteado = rand()%10 + 1;
	
	if(sorteado==num)
	{
		printf("\nVoce ganhou, parabens");
	}
	else
	{
		printf("Nao foi dessa vez, numero escolhido %d, numero sorteado %d", num, sorteado);
	}
}

