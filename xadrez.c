#include <stdio.h>

int main() {

    printf("Movimento da TORRE:\n");

    int i; 
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimento do BISPO:\n");

    int j = 1; 
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++; 
    }

    printf("\n");

    printf("Movimento da RAINHA:\n");

    int k = 1; 
    do {
        printf("Esquerda\n");
        k++; 
    } while (k <= 8); 

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
