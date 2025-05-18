#include <stdio.h>

// Código para desenhar o cone.

void desenhaCone(int Tabuleiro[10][10], int linha, int coluna) {
    int altura = 3;
    for (int i = 0; i < altura; i++) {
        int inicio = coluna - i;
        int fim = coluna + i;
        for (int j = inicio; j <= fim; j++) {
            if (linha + i < 10 && j >= 0 && j < 10) {
                Tabuleiro[linha + i][j] = 5;
            }
        }
    }
}

// Código para desenhar a cruz.

void desenhaCruz(int Tabuleiro[10][10], int linha, int coluna) {
    if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
        Tabuleiro[linha][coluna] = 5;
    }
    if (linha - 1 >= 0) Tabuleiro[linha - 1][coluna] = 5;
    if (linha + 1 < 10) Tabuleiro[linha + 1][coluna] = 5;
    if (coluna - 1 >= 0) Tabuleiro[linha][coluna - 1] = 5;
    if (coluna + 1 < 10) Tabuleiro[linha][coluna + 1] = 5;
}

// Código para desenhar o octaedro.

void desenhaOctaedro(int Tabuleiro[10][10], int linha, int coluna) {
    int altura = 3;
    for (int i = 0; i < altura; i++) {
        int inicio = coluna - i;
        int fim = coluna + i;
        if (linha - i >= 0) {
            for (int j = inicio; j <= fim; j++) {
                if (j >= 0 && j < 10)
                    Tabuleiro[linha - i][j] = 5;
            }
        }
    }
    for (int i = 1; i < altura; i++) {
        int inicio = coluna - (altura - 1 - i);
        int fim = coluna + (altura - 1 - i);
        if (linha + i < 10) {
            for (int j = inicio; j <= fim; j++) {
                if (j >= 0 && j < 10)
                    Tabuleiro[linha + i][j] = 5;
            }
        }
    }
}


int main() {

    int Tabuleiro[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {9, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };


    printf("!!!Iniciando a batalha naval!!! \n");
    printf("!!!Todos as habilidades foram posicionados!!!\n");
    printf("--------------------------------------------\n");

    // Habilidades (cone, cruz e octaedro)

    desenhaCone(Tabuleiro, 1, 3);
    desenhaCruz(Tabuleiro, 2, 8);
    desenhaOctaedro(Tabuleiro, 7, 4);

    // Imprime o tabuleiro

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
