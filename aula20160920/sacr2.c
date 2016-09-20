#include <stdio.h>
#include <stdlib.h>
#include <time.h>


jogardado();

int main()
{
	int x, j=0, ganhou = 0;
	srand(time(0));
	
	do
	{
		x=jogardado();
		if(x>21)
		{
			printf("\nVoce ganhou, total= %d \n\n", x);
			ganhou = 1;
			break;
		}
		j++;
		
	}while(j<3);
	
	if(ganhou == 0) printf("\nVoce perdeu depois das tres tentativas\n");
	
	
	return 0;
}

int jogardado()
{
	int i, dado, total=0;
	for(i=0; i<5; i++)
	{
		dado=rand()%6+1;
		printf("%d  ", dado);
		total=total+dado;
	}
	printf("\n\n");

	return total;
}

