#include <stdio.h>
#include <time.h>

int main () {
    srand(time(0));
    int dado_1, dado_2, dado_3, soma;
    printf("Clique para comecar o jogo!");
    system("pause");

    dado_1 = rand() % 7;
    dado_2 = rand() % 7;
    dado_3 = rand() % 7;
    soma = dado_1 + dado_2 + dado_3;
    if(soma == 7 || soma == 11){
        printf("Voce ganhou!\n");
    }
    else{
        printf("Voce perdeu!\n");
    }
    printf("O numero e:%d \n", dado_1);
    printf("O numero e:%d \n", dado_2);
    printf("O numero e:%d \n", dado_3);

    return 0;

}


