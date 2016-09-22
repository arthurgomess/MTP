#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define conversao(R, G, B) \
		({ float Y, CB, Pr; \
		printf ("Y= %f",round(0.299*R+0.587*G+0.114*B)); \
		printf ("\nCb= %f",round(-0.168736*R-0.331264*G+0.5*B)); \
		printf ("\nPr= %f",round(0.5*R-0.418688*G-0.081312*B)); \
	})

int main()
{
	float R, G, B;
	
	printf("                             Conversao RGB para YCbPr\n\n");
	printf("Entre com os valores de R, G e B, respectivamente:\n");
	scanf("%f", &R);
	scanf("%f", &G);
	scanf("%f", &B);
	
	conversao(R, G, B);
	
    return 0;
}
