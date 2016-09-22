#include <stdio.h>

int main () {
    float base_triangulo, altura_triangulo, area;
    printf("Entre com o valor com a base e a altura do seu triangulo respectivamente: ");
    scanf("%f%f",&base_triangulo,&altura_triangulo);
    area= (base_triangulo*altura_triangulo)/2;
    printf("A Area do triangulo e: %f", area);
    return 0;

}
