#include <stdio.h>
#include <ctype.h>
#include <math.h>


float DELTA(float a, float b, float c);

int main()
{
	float a, b, c, x, raiz1, raiz2;
	
	printf("Sendo a funcao do tipo  y = a*x^2 + b*x + c entre com a, b e c, respectivamente:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	x=DELTA(a, b, c);
	
	if(x>0)
	{
		raiz1 = (-b + sqrt(x))/(2*a); 
		raiz2 = (-b - sqrt(x))/(2*a);
		printf("\nRaiz 1= %f \nRaiz 2= %f \n\n", raiz1, raiz2);
	}
	
	else
	{
		if(x==0)
		{
			raiz1 = raiz2 = -b/(2*a);
			printf("\nRaiz 1= Raiz 2= %f \n\n", raiz1);
		}
		
		else
		{
			printf("Nao ha raizes reais\n\n");
		}
	}
	
	return 0;
}


float DELTA(float a, float b, float c)
{
	float delta;
	
	delta = (b*b -4*a*c);	
	printf("\n %f \n", delta);
	
	
	return delta;
}
