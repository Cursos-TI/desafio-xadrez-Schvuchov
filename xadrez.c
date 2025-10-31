#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    //quanto cada peça vai andar
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    int cavaloBaixo = 2;
    int cavaloEsquerda = 1;

    // variaveis de controle
    int i;
    int j = 1;
    int k = 1;

    //torre
    printf("A torre se movimenta...\n");

    for(i = 1; i <= torre; i++){
        printf("Direita\n");
    }

    //bispo
    printf("O bispo se movimenta...\n");

    while(j <= bispo){
        printf("Cima, Direita\n");
        j++;
    }

    //rainha
    printf("A rainha se movimenta...\n");

    do {
        printf("Esquerda\n");
        k++;
    } while(k <= rainha);

    //cavalo
    printf("O cavalo se movimenta...\n");

    for( i = 1; i<= cavaloBaixo; i++){
        printf("Baixo\n");

        j = 1;
        while (j <= cavaloEsquerda && i == cavaloBaixo){
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
