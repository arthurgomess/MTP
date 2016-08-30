#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float dist;

    printf("Entre com os pontos:\n");
    printf("x1 e y1=\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("x2 e y2=\n");
    scanf("%f", &x2);
    scanf("%f", &y2);

    dist= sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("A distancia entre os dois pontos e'= %f", dist);

    printf("\n\n");


    return 0;

}
