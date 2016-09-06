#include <stdio.h>

int main (){

    int a, b, soma;
    unsigned char * ponteiro1 = NULL;
    unsigned char * ponteiro2 = NULL;
    unsigned char * ponteiro3 = NULL;

    printf("Entre com o valor de a e b\n\n");
    scanf("%s", &a);
    scanf("%s", &b);

    soma=a+b;
    ponteiro1=&a;
    ponteiro2=&a;
    ponteiro3=&soma;

    printf ("%p : %s\n", ponteiro1, a);
    printf ("%p : %s\n", ponteiro2, b);
    printf ("%p : %s\n", ponteiro3, soma);

    return 0;
}
