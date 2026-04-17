#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    void moverTorre(int casas){
        if(casas > 0){

        moverTorre(casas - 1);
        printf("Torre moveu para Direita\n\n");
        }
    }

    void moverRainha(int casas){
        if(casas > 0){

        moverRainha(casas - 1);
        printf("Rainha moveu para Esquerda\n\n");
        }
    }

    void moverBispo(int casas){
        // condição de parada
        if (casas == 0){
        return;
    }

        // loop externo → movimento vertical (Cima)
        for (int i = 0; i < 1; i++){
        
        // loop interno → movimento horizontal (Direita)
        for (int j = 0; j < 1; j++){
            printf("Bispo moveu para Cima, Direita\n\n");
        }

    }

        // chamada recursiva
        moverBispo(casas - 1);
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int main() {
    int r = 0;
    int b = 0;
    int t;
    int c;
    int c1 = 0;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    moverBispo(6);
     
    printf("-------------------------\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    moverTorre(5);

    printf("-------------------------\n");  
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    moverRainha(8);
    
    printf("-------------------------\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (c = 0, c1 = 0; c < 2, c1 < 2; c++, c1++)
    {
            printf("Cavalo moveu para ");
            printf("Cima\n\n");
        for (c1 = 0; c > c1; c1++)
        {
          printf("Cavalo moveu para ");
          printf("Direita\n\n");
        }       

    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


    return 0;
}
