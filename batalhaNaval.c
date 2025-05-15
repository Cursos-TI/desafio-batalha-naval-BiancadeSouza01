#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
     printf("****Jogo da Batalha naval****\n");
    char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Exibir o tabuleiro
    printf(" A B C D E F G H I J\n");
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("%d ", coluna[i]);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 ");
            } else {
                printf("3 ");
            }
        }

         
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int navio1[3][2] = { {0, 1}, {0, 2}, {0, 3} };
    int navio2[3][2] = { {1, 0}, {2, 0}, {3, 0} };
    int navio3[3][3] = { {8,2}, {9,1}, {7, 3} };
    int navio4[3][3] = { {6,4 }, {5, 3}, {4, 2} };

     for (int i = 0; i < 3; i++) {
        tabuleiro[navio1[i][0]][navio1[i][1]] = 3;
        tabuleiro[navio2[i][0]][navio2[i][1]] = 3;
        tabuleiro[navio3[i][0]][navio3[i][1]] = 3;
        tabuleiro[navio4[i][0]][navio4[i][1]] = 3;
    }
    // Exibir o tabuleiro atualizado
    printf(" A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", coluna[i]);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 ");
            } else {
                printf("3 ");
            }
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
