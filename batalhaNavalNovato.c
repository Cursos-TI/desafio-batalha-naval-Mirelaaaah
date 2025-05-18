#include <stdio.h>

int main() {

    // Declaração das variaveis do tabuleiro.
    
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
    {10, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

    // Declaração das variaveis dos navios.

    int Navio1[3]; // Será posicionado horizontalmente.
    int Navio2[3]; // Será posicionado verticalmente.

    // Impressão de mensagens para melhor entedimento e organização.

    printf("!!!Iniciando a batalha naval!!! \n");
    printf("!!!Posição do primeiro navio escolhida!!!\n");
    printf("!!!Posição do segundo navio escolhida!!!\n");
    printf("--------------------------------------------\n");

    // Posicionando o primeiro navio.

    Navio1[0] = 2; // linha
    Navio1[1] = 3; // coluna inicial
    Navio1[2] = 3; // tamanho do navio

    for (int k = 0; k < Navio1[2]; k++) {
    Tabuleiro[Navio1[0]][Navio1[1] + k] = 3; }

    // Posicionando o segundo navio.

    Navio2[0] = 5; // linha
    Navio2[1] = 7; // coluna inicial
    Navio2[2] = 3; // tamanho do navio

    for (int l = 0; l < Navio2[2]; l++) {
    Tabuleiro[Navio2[0] + l][Navio2[1]] = 3; }

    // Imprimindo o tabuleiro.

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            printf("%2d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
