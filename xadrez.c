#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    int torre = 1, bispo_diagonal = 1, rainha;
    int cavalo, movimento_cavalo; // declaração das peças e inicialização das peças torre e rainha

    // Implementação de Movimentação do Bispo
    printf("Movimentação do bispo.\n");
    while (bispo_diagonal <= 5)
    {
        int bispo = 1;
        while (bispo == 1)
        {
            printf("Bispo andou %d casa para cima e para direita\n", bispo_diagonal);
            bispo++;
        }
        bispo_diagonal++;
        
    }
    printf("\n");
    
   

    // Implementação de Movimentação da Torre
    printf("Movimentação da torre.\n");
    do
    {
        printf("Torre andou %d casas par direita\n", torre); // saída de movimentos da torre
        torre++; // incremento para prevenção de loop infinito
    } while (torre <= 5); // condicional da torre
    printf("\n");
    

    // Implementação de Movimentação da Rainha
    printf("Movimentação da rainha.\n");
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf("Rainha andou %d casas para esquerda.\n", rainha);
    }
    printf("\n");
    

    // Implementação de Movimentação do Cavalo
    printf("Movimentação do cavalo.\n");

    for (movimento_cavalo = 1; movimento_cavalo <= 1; movimento_cavalo++)
    {
        for (cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("Cavalo andou %d casa para baixo.\n", cavalo);
        }
        
        printf("Cavalo andou %d casa para esquerda.\n", movimento_cavalo);
        printf("\n");
    }



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
