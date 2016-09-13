#include <stdio.h>
#include <math.h>

#define recept(c, ptA) \
        ({printf (" Entre coord x de %c: ", c); \
        scanf("%f", &ptA.x); \
        printf (" Entre coord y de %c: ", c); \
        scanf("%f", &ptA.y); \
        })

#define mostrar(ponto) \
        ({printf ("Soma=(%g, %g)\n", ponto.x, ponto.y);})

#define soma(ptA,ptB,soma) \
        ({soma.x=ptA.x+ptB.x; \
          soma.y=ptA.y+ptB.y;})

#define distancia(ptA, ptB, d) \
        ({d=sqrt(pow(ptA.x-ptB.x, 2.f) + \
                 pow(ptA.y-ptB.y, 2.f));})


struct ponto{
        float x;
        float y;
    };


int main()
{
    struct ponto A, B, S;
    float dist;

    recept('A', A);
    recept('B', B);
    soma(A, B, S);
    distancia(A, B, dist);
    mostrar(S);

    printf("A distancia e'= %g", dist);

    return 0;
}
