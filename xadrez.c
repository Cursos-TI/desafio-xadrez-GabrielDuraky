#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    int torre = 1, bispo, rainha = 1; // declaração das peças e inicialização das peças torre e rainha

    // Implementação de Movimentação do Bispo
    for (bispo = 1; bispo <= 5; bispo++) // estrutura for inicializando bispo em 1 casa, condicional e incremento
    {
        printf("Bispo andou %d casas para cima/direita.\n", bispo); // saida de movimentos do bispo
    }

    // Implementação de Movimentação da Torre
    do
    {
        printf("Torre andou %d casas par direita\n", torre); // saída de movimentos da torre
        torre++; // incremento para prevenção de loop infinito
    } while (torre <= 5); // condicional da torre

    // Implementação de Movimentação da Rainha
    while (rainha <=8) // condicional a rainha
    {
        printf("Rainha andou %d casas para esquerda.\n", rainha); // saída de movimentos da rainha
        rainha++; // incremento para prevenção de loop infinito
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
