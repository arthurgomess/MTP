#include <stdio.h>
#include <ctype.h>

int main()
{
    int i=0;
    char inv;
    char frase[255];
    printf("Escreva uma frase: \n");
    gets(frase);

    inv=frase[i];

    while(inv!='\0')
    {
        frase[i]=toupper(inv);
        i++;
        inv=frase[i];
    }

    printf("%s\n\n", frase);

    return 0;
}
