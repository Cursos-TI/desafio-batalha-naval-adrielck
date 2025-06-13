#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa o tabuleiro com 0

    // Variáveis para posição inicial dos navios
    int x1 = 2, y1 = 3; // Navio horizontal começa na linha 2, coluna 3
    int tamanho_h = 4;  // Tamanho do navio horizontal

    int x2 = 5, y2 = 1; // Navio vertical começa na linha 5, coluna 1
    int tamanho_v = 3;  // Tamanho do navio vertical

    // Posiciona o navio horizontal (marca com 1)
    for (int i = 0; i < tamanho_h; i++) {
        tabuleiro[x1][y1 + i] = 1;
    }

    // Posiciona o navio vertical (marca com 2)
    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[x2 + i][y2] = 2;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanho_h; i++) {
        printf("(%d, %d)\n", x1, y1 + i);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < tamanho_v; i++) {
        printf("(%d, %d)\n", x2 + i, y2);
    }

    return 0;
}
