#include <stdio.h>
#include <string.h>

void inverter(char frase[256])
{
    int i;
    for(i=(strlen(frase)-1); i>=0; i--)
        printf("%c", frase[i]);
}

int main()
{
    char frase[256];

    printf("Entre com a frase: ");
    fflush(stdin);
    gets(frase);

    printf("\nA frase invertida fica: ");
    inverter(frase);

    printf("\n\n");

    return 0;
}
