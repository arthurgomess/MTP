#include <stdio.h>
#define N 2
#define M 4

void preencher(float matriz[N][M]);
void transpor(float matriz[N][M], float transposta[M][N]);
void imprimir(float matriz[N][M]);

int main()
{
    float matriz[N][M], transposta[M][N];
    printf("\nPreencha a matriz:\n");
    preencher(matriz);
    transpor(matriz, transposta);
    imprimir(matriz);
    imprimirtra(transposta);

    return 0;
}

void preencher(float matriz[N][M])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            printf("Entre com o a%d%d  ", i, j);
            scanf("\n%f", &matriz[i][j]);
        }
    }
}

void imprimir(float matriz[N][M])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            printf("%g%c", matriz[i][j], (j!=M-1)? '\t' : '\n');
    }
}

void transpor(float matriz[N][M], float transposta[M][N])
{
    int i, j;

    printf("\n\nMatriz: \n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            transposta[j][i]=matriz[i][j];
    }
}

void imprimirtra(float transposta[M][N])
{
    int i, j;

    printf("\n\n\nTransposta=\n");
    for (i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
            printf("%g%c", transposta[i][j], (j!=N-1)? '\t' : '\n');
    }
}
