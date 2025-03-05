/*
Definição:
    -Declarar tipo e quantidade
        - int numeros[5]

Inicialização:
    - Inicialização com lista
        -Int numeros[5] = {10, 20, 30, 40};


Acesso:
    - Acesso pelo índice
        -numeros[0]
        -numeros[1]
        -numeros[4]
*/

#include <stdio.h>

int main(){

    // Array de nomes, sem quantidade definida
    char *nomes[] = {"Rafael", "Rafaela", "Gael"};

    for (int i = 0; i < 3; i++){
        printf("O nome é: %s \n", nomes[i]);
    }

    // Array de números, com quantidade definidade

    int numeros[4] = {1, 2, 3, 4};

    printf("O número é: %d \n", numeros[3]);

    // tem como ser declarado depois

    int numeros[5];

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    return 0;
}