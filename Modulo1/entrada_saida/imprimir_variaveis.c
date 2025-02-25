#include <stdio.h>

int main(){

    char nome[20] = "Rafael";
    int idade = 25;
    float altura = 1.80;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %2.f\n", altura);

    //variaveis no mesmo print
    printf("Nome: %s e idade: %d", nome, idade);         

}

/*
printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
%d: imprime um interio no formato decimal
%i: equivalente a %d
%f: imprime um ponto flutuante no formato padrão
%e: imprime um ponto flutuante na notação científica
%c: imprime um único caractere
%s: imprime uma cadeia (sting) de caracteres
*/