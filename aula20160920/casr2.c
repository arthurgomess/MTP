#include <stdio.h>
#include <ctype.h>
#include <math.h>


void recebe_dado(char tipo, void * endereco);

int main()
{
	int i;
	float f;
	char c;
	
	printf("Entre com um inteiro "); 
	recebe_dado('i', &i);
	printf("Entre com um float "); 
	recebe_dado('f', &f);	
	printf("Entre com um caractere "); 
	recebe_dado('c', &c);
	printf("\nQuadrado %d", i*i);
	printf("\nRaiz %f", sqrt(f));
	printf("\nCaractere %c\n", (isupper(c)? tolower(c) : toupper(c)));
	
	return 0;
}

void recebe_dado(char tipo, void * endereco)
{
	int c;
	switch(tipo)
	{
		case 'i': scanf("%d", (int*)endereco); break;
		case 'f': scanf("%f", (float*)endereco); break;
		case 'c': scanf("%c", (char*)endereco); break;
	}
	
	while((c=getchar()) != EOF && c!= '\n'); //limpar buffer
}

