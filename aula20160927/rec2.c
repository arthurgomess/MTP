#include <stdio.h>

void soma(int A[100], int N)
{
    int SOMA=0, i;

    for(i=0; i<N; i++)
    {
        SOMA=SOMA+A[i];
    }
    printf("O resultado da soma e'= %d", SOMA);
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);

    soma(A, N);

    printf("\n\n");
    return 0;
}
