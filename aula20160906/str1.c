#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

    char frase[50];
    int i;

    printf("Entre com uma frase\n");
    gets(frase);

    for( i=0; frase[i]!= '\0' ; i++)
      {
         frase[i] = toupper(frase[i]);
      }
    printf("tamanho= %u\n", strlen(frase));

    if(strcmp(frase,"BOM DIA")==0)
        printf("Bom dia para vc tbm");
    else
        printf("Voce quer dizer: %s?\n", frase);

    return 0;
}
