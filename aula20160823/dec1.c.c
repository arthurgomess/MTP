#include <stdio.h>

int main () {
    int numero, par_impar, multiplo_3, multiplo_5, multiplo_7;
    printf("Entre com o numero que desejar: ");
    scanf("%i",&numero);

    par_impar = numero%2;
    multiplo_3 = numero%3;
    multiplo_5 = numero%5;
    multiplo_7 = numero%7;

    if(par_impar == 0){
        printf("O numero e par!\n");
    }
    else{
        printf("O numero e impar!\n");
    }

    if(multiplo_3 == 0){
        printf("O numero e multiplo de 3!\n");
    }
    else{
        printf("O numero nao e multiplo de 3!\n");
    }

    if(multiplo_5 == 0){
        printf("O numero e multiplo de 5!\n");
    }
    else{
        printf("O numero nao e multiplo de 5!\n");
    }

    if(multiplo_7 == 0){
        printf("O numero e multiplo de 7!\n");
    }
    else{
        printf("O numero nao e multiplo de 7!\n");
    }
    return 0;

}
