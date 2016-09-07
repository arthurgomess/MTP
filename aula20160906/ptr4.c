#include <stdio.h>

int main(){
	
	int a, b, soma;
	int *a1,*b1,*soma1;
	
	printf ("Entre com dois numeros:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	soma=a+b;
	
	a1 = &a;
	b1 = &b;
	soma1 = &soma;
	
	printf("\nDado: %d e Endereco: %p", a, a1);
	printf("\nDado: %d e Endereco: %p", b, b1);
	printf("\nDado: %d e Endereco: %p\n\n", soma, soma1);
	
	return 0;
}
