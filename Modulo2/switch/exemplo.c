#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel){
        case 1:
        // código a ser executado se variavel == valor1
        printf("Você digitou 1\n");
        break;
        case 2:
        // código a ser executado se variavel == valor2
        printf("Você digitou 2\n");
        break;
        default:
        // código a ser executado se nenhum dos casos acima for verdadeiro
        printf("Valoe digitado não é 1 ou 2\n");
    }
}