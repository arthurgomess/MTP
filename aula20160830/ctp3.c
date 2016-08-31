#include <stdio.h>
#include <ctype.h>

int main() {
    int indice = 0, cont = 0, verificar;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    while(frase[indice] != '\0')
    {

        if(isalpha(frase[indice]) != 0)
        {
            cont++;
        }
        indice++;
    }
    printf("O numero de caracteres e: %d\n", cont);

    return 0;
}
