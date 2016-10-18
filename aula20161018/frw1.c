#include <stdio.h>

void receberdados();
void recuperardados();

int main()
{
	int opc;
	
	do
	{
		printf("\n\n1-Receber dados\n");
		printf("2-Recuperar dados\n");
		printf("0-Sair\n");
		printf("\nEntre com a opcao: ");
		fscanf(stdin,"%d", &opc);
		if(opc==1)
			receberdados();
		if(opc==2)
			recuperardados();
			
		
	}while(opc);
	
	
	return 0;
}

void receberdados()
{
	FILE * arquivo;
	char nome[256];
	int idade;
	float altura;
	
	printf("entre com seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("entre com a sua idade: ");
	scanf("%d", &idade);
	printf("entre com sua altura: ");
	scanf("%g", &altura);
	arquivo=fopen("info.txt", "w");
	fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura);
	fclose(arquivo);
}

void recuperardados()
{
	FILE * arquivo;
	char nome[256];
	int idade;
	float altura;
	
	arquivo = fopen("info.txt", "r");
	fscanf(arquivo, "r");
	fscanf(arquivo, "%s\n%d\n%f\n", nome, &idade, &altura);
	fclose(arquivo);
	fprintf(stdout, "Nome: %s\n", nome);
	fprintf(stdout, "Idade: %d\n", idade);
	fprintf(stdout, "altura: %f\n", altura);
}
