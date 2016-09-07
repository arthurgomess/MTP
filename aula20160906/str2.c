#include <stdio.h>
#include <string.h>

int main()
{
    char frase[256],msg[256];
    int i,j=1;
    
    printf("Informe uma frase: ");
    fflush(stdin);
    gets(frase);

    for(i=0; frase[i] != '\0'; i++)
    {
        frase[i] = toupper(frase[i]);
    }
    
    msg[0] = frase[0];
    
    for(i=0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
		{
            msg[j] = frase[i+1];
            j++;
        }
    }

    printf("Mensagem Oculta: %s\n\n", msg);

    return 0;
}
