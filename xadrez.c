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

    printf("\n");
    printf("Movimento Cavalo: \n"); 

    for (int a = 1; a <= 2; a++){
        printf("Vertical \n");

        if (a == 2) {
            int b = 1;
           while (b <= 1)
        {
            printf("Horizontal");
            b++;
        }
        printf("\n");
    }
        
    }

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}