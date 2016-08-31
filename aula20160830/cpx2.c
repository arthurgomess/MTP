#include <stdio.h>
#include <complex.h>

int main()
{

    double complex Z1;
    double R1_z,I1_z;
    double mod;

    printf("Real e imaginario : \n");
    scanf("%lf", &R1_z);
    scanf("%lf", &I1_z);

    Z1=R1_z+I1_z*I;

    mod= cabs(Z1);

    printf("O produto desse numero complexo pelo seu conjugado e'= %f", mod);
    printf("\n\n");
    return 0;
}
