#include <stdio.h>
#include <time.h>

int main () {
    srand(time(0));
    int numero, par_impar, v1;
    printf("Entre com o valor de um numero inteiro nao-negativo: ");
    scanf("%i",&numero);
    v1 = rand() % 2;
    numero = numero + v1;
    par_impar = numero%2;
    if(par_impar == 0){
        printf("O numero e par!\n");
    }
    else{
        printf("O numero e impar!\n");
    }
    printf("O numero e:%d \n", v1);
    return 0;

}

