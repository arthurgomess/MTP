#include <stdio.h>

int main () {
    float media, valor_A, valor_B, valor_C;
    printf("Entre com os tres valores para calcular a sua media: ");
    scanf("%f%f%f",&valor_A,&valor_B,&valor_C);
    media= (valor_A*2+valor_B*3+valor_C*5)/(2+3+5);
    printf("A sua media e: %f", media);
    return 0;

}
