#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -----------------------------
    // Movimento da TORRE (for loop)
    // -----------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");  // Torre vai 5 casas para a direita
    }

    // -----------------------------
    // Movimento do BISPO (while loop)
    // -----------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");  // Bispo vai em diagonal (cima + direita)
        j++;
    }

    // -----------------------------
    // Movimento da RAINHA (do-while loop)
    // -----------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");  // Rainha vai 8 casas para a esquerda
        k++;
    } while (k <= casasRainha);

    return 0;
}
