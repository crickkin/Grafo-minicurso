#include <stdio.h>

#define ORDEM 5

void buscaLargura(int M[ORDEM][ORDEM], int ini, int *visitado, int cont) {
    int vet[ORDEM] = {0}, toVisit = 0, i = 0;
    
    if (ini > ORDEM)
        return;

    visitado[ini] = cont;
    printf("\nVertice %d\n\n", ini);

    for (i = 0; i < ORDEM; i++)
    {
        printf("Posicao[%d] %d\n", i, M[ini][i]);
        if (M[ini][i]) {
            printf("Tem ligacaoo!\n\n");
            vet[toVisit] = i;
            toVisit++;
        }
    }

    printf("Serao Visistados:\n");
    for (i = 0; i < toVisit; i++) {
        printf("Vertice %d\n", vet[i]);
        visitado[]
    }
}

    int main()
{
    int M[ORDEM][ORDEM] = {{0, 1, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 1}, {1, 0, 0, 0, 1}, {0, 1, 0, 0, 0}};

    int cont = 1, visitado[ORDEM] = {0};

    buscaLargura(M, 0, visitado, cont);

    printf("\nOrdem de Visitacao:\n");
    for (int i = 0; i < ORDEM; i++)
        printf("%d - %d\n", i, visitado[i]);

    printf("\n\n");
    return 0;
}