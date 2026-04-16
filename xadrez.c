#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int r = 0;
    int b = 0;
    int t;
    int c;
    int c1 = 0;    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     
    while (b < 5)
    {
        printf("Bispo moveu para");
        printf(" Cima, ");
        if (b >= 0)
        {
        printf("Direita\n\n");
        }
        b++;
    }
    printf("-------------------------\n");  
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
     for  (t = 0; t < 5; t++)
     {
        printf("Torre moveu para ");
        printf("Direita\n\n");
     }
    printf("-------------------------\n");        
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do
    {
        printf("Rainha moveu para ");
        printf("Esquerda\n\n");
        r++;
    }while (r < 7);
    
    printf("-------------------------\n");      
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        for (c = 1; c < 2; c++)
    {
        while (c1 < 2)
        {
            printf("Cavalo moveu para ");
            printf("Baixo\n\n");
            c1++;
        }
        printf("Cavalo moveu para ");
        printf("Esquerda\n\n");

    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}