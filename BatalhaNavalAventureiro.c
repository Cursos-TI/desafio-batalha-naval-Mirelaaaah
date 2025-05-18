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
    int Navio3[3]; // Será posicionado na diagonal.
    int Navio4[3]; // Também será posicionado na diagonal.

    // Impressão de mensagens para melhor entedimento e organização.

    printf("!!!Iniciando a batalha naval!!! \n");
    printf("!!!Posição do primeiro navio escolhida!!!\n");
    printf("!!!Posição do segundo navio escolhida!!!\n");
    printf("!!!Posição do terceiro navio escolhida!!!\n");
    printf("!!!Posição do qaurto navio escolhida!!!\n");
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

    // Posicionamento do terceiro navio.

    Navio3[0] = 7; // linha
    Navio3[1] = 1; // coluna inicial
    Navio3[2] = 3; // tamanho do navio

    for (int j = 0; j < Navio3[2]; j++) {
    Tabuleiro[Navio3[0] + j][Navio3[1] + j] = 3; }

    // Posicionamento do quarto navio.

    Navio4[0] = 3; // linha
    Navio4[1] = 6; // coluna inicial
    Navio4[2] = 3; // tamanho do navio

    for (int m = 0; m < Navio4[2]; m++) {
    Tabuleiro[Navio4[0] + m][Navio4[1] -m] = 3; }

    // Imprimindo o tabuleiro.

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            printf("%4d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
