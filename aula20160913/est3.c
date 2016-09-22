#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 100

struct aluno{
        char nome[20];
        int idade;
        char telefone[20];
    };


int main()
{
    struct aluno Alunos[10];
    int i=0, opc, j, k, a;

    printf("OBS: Ao desejar parar, digite uma idade negativa\n\n");

    for(i=0; i<N; i++)
    {
    	printf("Cadastro do aluno %d", i+1);
        printf("\n\nEntre com o nome do aluno: ");
        fflush(stdin);
        gets(Alunos[i].nome);
        printf("Idade= ");
        scanf("%d", &Alunos[i].idade);
        printf("Telefone com DDD= ");
       	fflush(stdin);
        gets(Alunos[i].telefone);
        if(Alunos[i].idade<0)
            break;
    }



    do
    {
        system("cls");
        printf("O que deseja fazer: ");
        printf("\n1-Listar nomes \n2-Listar idades \n3-Listar telefones\n4-Sair\n\n");
        scanf("%d", &opc);

        switch(opc)
        {
            case 1:
                for(j=0; j<i; j++)
                {
                    printf("Nome do do Aluno %d \n %s \n", j+1, Alunos[j].nome);
                }
            system("pause");
            break;

            case 2:
                for(k=0; k<i; k++)
                {
                    printf("Idade do Aluno %d \n %d \n", k+1, Alunos[k].idade);
                }
            system("pause");
            break;
            
            case 3:
                for(a=0; a<i; a++)
                {
                    printf("Telefone do Aluno %d \n %s \n", a+1, Alunos[a].telefone);
                }
            system("pause");
			    break;            
        }
    } while (opc!=4);



    return 0;
}
