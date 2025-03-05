// Exemplo

#include <stdio.h>

int main(){

    int matriz[3][3];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    printf("Os elementos da posição [0][0] são: %d", matriz[0][0]);
}

/*
Exempl de armazenamento da matriz

int matriz[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
*/