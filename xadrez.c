#include <stdio.h>

void moverPeca() {
    int opcao, movimentos, direcao;

    printf("\n--- JOGO DE XADREZ ---\n");
    printf("Escolha qual peça você quer movimentar:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 5) {
        printf("\nSaindo do jogo...\n");
        return; 
    }

    printf("\nEscolha a direção:\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    printf("5. Diagonal\n");
    printf("Opção: ");
    scanf("%d", &direcao);

    printf("Quantos movimentos você quer fazer? ");
    scanf("%d", &movimentos);

    printf("\n--- Movimento ---\n");

    switch (opcao) {
        case 1: // Torre
            if (direcao >= 1 && direcao <= 4) {
                if (movimentos > 8) {
                    printf("A torre não pode se mover mais que 8 casas!\n");
                    movimentos = 8;
                }
                for (int i = 1; i <= movimentos; i++) {
                    printf("Torre moveu ");
                    if (direcao == 1) printf("para cima (%d)\n", i);
                    if (direcao == 2) printf("para baixo (%d)\n", i);
                    if (direcao == 3) printf("para a direita (%d)\n", i);
                    if (direcao == 4) printf("para a esquerda (%d)\n", i);
                }
            } else {
                printf("Movimento inválido! A torre só anda em linha reta.\n");
            }
            break;

        case 2: // Bispo
            if (direcao == 5) {
                if (movimentos > 8) {
                    printf("O bispo não pode se mover mais que 8 casas!\n");
                    movimentos = 8;
                }
                for (int j = 1; j <= movimentos; j++) {
                    printf("Bispo moveu em diagonal (%d)\n", j);
                }
            } else {
                printf("O bispo só pode se mover em diagonal!\n");
            }
            break;

        case 3: // Rainha
            if (direcao >= 1 && direcao <= 5) {
                if (movimentos > 8) {
                    printf("A rainha não pode se mover mais que 8 casas!\n");
                    movimentos = 8;
                }
                for (int k = 1; k <= movimentos; k++) {
                    printf("Rainha moveu ");
                    if (direcao == 1) printf("para cima (%d)\n", k);
                    if (direcao == 2) printf("para baixo (%d)\n", k);
                    if (direcao == 3) printf("para a direita (%d)\n", k);
                    if (direcao == 4) printf("para a esquerda (%d)\n", k);
                    if (direcao == 5) printf("em diagonal (%d)\n", k);
                }
            } else {
                printf("Movimento inválido para a rainha!\n");
            }
            break;

        case 4: // Cavalo
            if (movimentos > 1) {
                printf("O cavalo só pode fazer um movimento em L por vez!\n");
                movimentos = 1;
            }
            for (int c = 1; c <= movimentos; c++) {
                printf("Cavalo moveu em L: 2 casas em uma direção e 1 em outra.\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\nMovimento concluído!\n");

    moverPeca();
}

int main() {
    moverPeca(); 
    return 0;
}
