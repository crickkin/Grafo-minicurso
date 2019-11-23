#include <stdio.h>

#define ORDEM 5

void buscaProfundidade(int M[ORDEM][ORDEM], int ini, int *visitado, int cont) {
    if (ini > ORDEM)
        return;
    
    visitado[ini] = cont;
    printf("Vertice %d\n\n", ini);

    for (int i = 0; i < ORDEM; i++) {
        printf("Posicao[%d] %d\n", i, M[ini][i]);
        if (M[ini][i]) {
            printf("Tem ligacao!!\n\n");
            for (int j = 0; j < ORDEM; j++) {
                if (visitado[i] != 0) {
                    printf("Vertice %d Ja foi visitado\n\n", i);
                    return;
                }
            }
            buscaProfundidade(M, i, visitado, cont+1);
        }
    }
}

int main() {
    int M[ORDEM][ORDEM] = {{0,1,0,0,0}, {0,0,1,1,0}, {0,0,0,0,1}, {1,0,0,0,1}, {0,1,0,0,0}};

    int cont = 1, visitado[ORDEM] = {0};

    buscaProfundidade(M, 0, visitado, cont);

    printf("\nOrdem de Visitacao:\n");
    for (int i = 0; i < ORDEM; i++)
        printf("%d - %d\n", i, visitado[i]);

    printf("\n\n");
    return 0;
}