#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;

    //Sintaxe scanf
    //scanf("formato1" formato2, &variavel, variavel2)

    printf("Entre com sua idade e altura\n");
    scanf("%d %f", &idade, &altura);
    printf("idade: %d\n", idade);
    printf("altura: %.2f", altura);
    //printf("Entre com sua Altura\n");
    //scanf("%f", &altura);
    //printf("Altura: %f", altura);
    printf("\nEntre com sua opção\n");
    scanf(" %c", &opcao);
    printf("A Opção é: %c\n", opcao);
    

}