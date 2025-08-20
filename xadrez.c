#include <stdio.h>

int main() {
    int i;

    // Movimento da TORRE - 5 casas para a direita - usando FOR
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita - usando WHILE
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimento da RAINHA - 8 casas para a esquerda - usando DO-WHILE
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}