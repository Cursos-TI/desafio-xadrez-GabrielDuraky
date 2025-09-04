#include <stdio.h>

// Função recursiva para a rainha
void rainha_mov(int rainha_movimento) {
    if(rainha_movimento > 1) {
        rainha_mov(rainha_movimento - 1);
        printf("Rainha andou %d casas para esquerda.\n", rainha_movimento);
    }
} 

//Função recursiva para a torre
void torre_mov(int torre_movimento) {
    if(torre_movimento > 1) {
        torre_mov(torre_movimento - 1);
        printf("Rainha andou %d casas para direita\n", torre_movimento);
    }
}

// Função recursiva para o bispo
void bispo_mov(int bispo_movimento) {
    if(bispo_movimento >= 1) {
        bispo_mov(bispo_movimento - 1);
        printf("Bispo andou %d casas para direita\n", bispo_movimento);
    }
}

int main() {
    int bispo_diagonal = 1,bispo = 5, rainha = 8, torre = 5; 
    int cavalo, movimento_cavalo;
    
     
    printf("Movimentação do bispo.\n");
    
    while (bispo_diagonal <= 5) // laço para o movimento vertical do bispo
    {
        printf("Bispo andou %d casas para cima\n", bispo_diagonal); 
        bispo_diagonal++;
        if (bispo_diagonal == 5) {
            continue;
        }
    }
    bispo_mov(bispo); // recurso para movimentação horizontal
    printf("\n");
    

    // Implementação de Movimentação do Cavalo
    printf("Movimentação do cavalo.\n");
    for(cavalo = 1, movimento_cavalo = 0; // inicialização de multiplas variáveis
        cavalo <= 2 || movimento_cavalo <= 1; // condicionais multiplas
        cavalo++, movimento_cavalo++) { // Incrementos
        printf("Cavalo andou %d casas par cima\n", cavalo);
        if(movimento_cavalo == 1 ) { // Condição para a movimentação em 'l" do cavalo
            printf("Cavalo moveu-se %d casa para direita.\n", movimento_cavalo);
        }
    }
    printf("\n");
 
    // Movimentação da Torre
    printf("Movimentação da torre:\n");
    torre_mov(torre);
    printf("\n");

    // Movimentação da rainha
    printf("Movimentação da Rainha: \n");
    rainha_mov(rainha);
    printf("\n");

    return 0;
}
