#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int j=1; //variável da Rainha
    int k=1; //variável do Bispo

    printf("--- Desafio Xadrez --- \n\n");

    //Torre movimenta 5 casas para direita

    printf("Torre: \n\n");
    for (int i = 1; i <= 5; i++) //no loop FOR a variável "i" foi declarada no próprio loop.
    {
        printf("%d - Direita \n",i);
    }
    printf("\n\n");

    //Rainha movimenta 8 casas para a esquerda

    printf("Rainha: \n\n");

    do
    {
        printf("%d - Esquerda \n" ,j);

        j++;
    } while (j <= 8);
    
    printf("\n\n");

    //Bispo movimenta 5 casas na diagonal, sendo declarado uma pra CIMA e outra para DIREITA
    printf("Bispo: \n\n");

    while (k <=5)
    {
        printf("%d - Cima , Direita \n" ,k);

        k++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
