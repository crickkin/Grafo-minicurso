#include <stdio.h>

typedef struct dado
{
    int valor;
} dado;

int main() {
    dado teste;

    teste.valor = 9;
    printf("Yowzah %d", teste.valor);
    return 0;
}