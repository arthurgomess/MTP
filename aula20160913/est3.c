#include <stdio.h>
#include <math.h>

#define N 100

struct aluno{
        char nome[20];
        int idade;
        int telefone;
    };


int main()
{
    struct aluno Alunos[10];
    int i=0, opc, j, k, a;

    printf("OBS: Ao desejar parar, digite uma idade negativa\n\n");

    for(i=0; i<N; i++)
    {
        printf("Entre com o nome do aluno: ");
        fflush(stdin);
        gets(Alunos[i].nome);
        printf("Idade= ");
        scanf("%g", &Alunos[i].idade);
        printf("Telefone com DDD= ");
        scanf("%g", &Alunos[i].telefone);
        if(Alunos[i].idade<0)
            break;
    }



    do
    {
        system("cls");
        printf("O que deseja fazer: ");
        printf("\n1-Listar nomes \n2-Listar idades \n3-Listar telefones\n4-Sair");
        scanf("%d", &opc);

        switch(opc)
        {
            case 1:
                for(j=0; j<i; j++)
                {
                    printf("Idade do Aluno %d \n %c \n", j+1, Alunos.nome[j]);
                }
            break;

            case 2:
                for(k=0; k<i; k++)
                {
                    printf("Idade do Aluno %d \n %d \n", k+1, Alunos.idade[k]);
                }
            break;
            case 3:
                for(a=0; a<i; a++)
                {
                    printf("Telefone do Aluno %d \n %d \n", a+1, Alunos.telefone[a]);
                }
                break;
        }
    } while (opc!=4);



    return 0;
}
