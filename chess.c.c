#include <stdio.h>

/*
 ============================================================================
    PROGRAMA: Simulação de movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo)
    OBJETIVO: Demonstrar recursividade, loops aninhados e controle de fluxo
    AUTOR: [Seu Nome]
 ============================================================================
*/

// ---------------------------------------------------------------------------
// Função Recursiva: Torre
// A Torre se move em linha reta (neste caso, para a direita).
// A cada chamada recursiva, é impresso um movimento "Direita" até atingir zero.
// ---------------------------------------------------------------------------
void moverTorre(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; // Caso base: nenhum movimento restante
    printf("Direita\n");
    moverTorre(movimentosRestantes - 1);  // Chamada recursiva
}

// ---------------------------------------------------------------------------
// Função Recursiva + Loops Aninhados: Bispo
// O Bispo se move na diagonal. Aqui, simulamos "Cima, Direita".
// Utilizamos loops aninhados para reforçar a ideia de movimentos verticais e horizontais,
// e a recursividade para repetir o movimento pelo número de casas definidas.
// ---------------------------------------------------------------------------
void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; // Caso base

    // Loop externo = movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno = movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(movimentosRestantes - 1); // Recursão para o próximo passo
}

// ---------------------------------------------------------------------------
// Função Recursiva: Rainha
// A Rainha pode se mover em várias direções, mas aqui simulamos somente para a esquerda.
// ---------------------------------------------------------------------------
void moverRainha(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(movimentosRestantes - 1); // Chamada recursiva
}

// ---------------------------------------------------------------------------
// Loops Aninhados com Controle de Fluxo: Cavalo
// O Cavalo se move em "L". Aqui: 2 casas para cima e 1 para a direita.
// Utilizamos loops aninhados, `continue` e `break` para controlar o fluxo.
// ---------------------------------------------------------------------------
void moverCavalo(int movimentoVertical, int movimentoHorizontal) {
    for (int i = 1; i <= movimentoVertical; i++) {  // Movimento vertical (Cima)
        for (int j = 1; j <= movimentoHorizontal + 1; j++) { // Controle extra
            if (i == 1 && j == 2) {
                // Evita imprimir movimento redundante no primeiro ciclo
                continue;
            }

            // Movimento para cima
            if (i <= movimentoVertical) {
                printf("Cima\n");
            }

            // Movimento final: uma casa para a direita
            if (j == movimentoHorizontal) {
                printf("Direita\n");
                break; // Encerra o movimento em "L"
            }
        }
    }
}

int main(void) {
    // Definindo o número de movimentos para cada peça
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;
    const int movimentoCavaloVertical = 2;   // Cavalo: 2 casas para cima
    const int movimentoCavaloHorizontal = 1; // Cavalo: 1 casa para a direita

    // --------- Execução dos Movimentos ---------

    printf("Movimentos da Torre:\n");
    moverTorre(movimentosTorre);
    printf("\n");

    printf("Movimentos do Bispo:\n");
    moverBispo(movimentosBispo);
    printf("\n");

    printf("Movimentos da Rainha:\n");
    moverRainha(movimentosRainha);
    printf("\n");

    printf("Movimentos do Cavalo:\n");
    moverCavalo(movimentoCavaloVertical, movimentoCavaloHorizontal);

    return 0;
}

