#include <stdio.h>
#include <complex.h>

int main()
{

    double complex Z1, Z2, soma;
    double R1_z,I1_z,R2_z,I2_z;
    double mod;

    printf("Real e imaginario de 1: \n");
    scanf("%lf", &R1_z);
    scanf("%lf", &I1_z);
    printf("Real e imaginario de 2: \n");
    scanf("%lf", &R2_z);
    scanf("%lf", &I2_z);

    Z1=R1_z+I1_z*I;
    Z2=R2_z+I2_z*I;

    soma= Z1+Z2;

    printf("A soma e' %lf + &lf*I \n", creal(soma), cimg(soma));
    printf("\n\n");
    return 0;
}
