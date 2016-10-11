#include <stdio.h>
#include <stdlib.h>


char * inicializatxt();
char * recebetexto(char * texto);
int main()
{
    char * texto;
    texto= inicializatxt();
    printf ("   Entre com um txt, se desejar sair aperte '#'+ENTER para sair           \n");
    texto=recebetexto(texto);
    printf("\n          O que tem na HEAP            \n");
    printf("%s\n", texto);
    free(texto);

    return 0;
}

char * inicializatxt()
{
    char * texto;
    texto= (char *) malloc(sizeof(char));
    texto[0]='\0';
    return texto;
}

char * recebetexto(char * texto)
{
    int c, tamanho=0;
    do
    {
        c= getchar();
        if(c!='#')
        {
            tamanho++;
            texto=(char *) realloc(texto, (tamanho+1)*sizeof(char));
            texto[tamanho]='\0';
            texto[tamanho-1]=c;
        }


    }while(c!='#');

    return texto;
}
