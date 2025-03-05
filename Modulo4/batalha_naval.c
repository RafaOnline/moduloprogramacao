#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    
    for(int i = 0; i < 3; i++){
        tabuleiro[2][3 + i] = 3;
    }

    for(int j = 0; j < 3; j++){
        tabuleiro[1 + j][1] = 3;
    }

    printf("Batalha Naval\n");

    for(int k = 0; k < 10; k++){
        for(int l = 0; l < 10; l++) {
            printf("%d", tabuleiro[k][l]);
        }
        printf("\n");
    }

    return 0;
}