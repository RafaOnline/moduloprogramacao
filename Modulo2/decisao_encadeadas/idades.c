#include <stdio.h>


int main(){
    int idade;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    //crianças < 12
    // Adolescente 12
    //Adulto 18 <= x < 60
    //idoso > 60
/*
    if (idade < 12){
        printf("Você é uma criança\n");
    } else if (idade >= 12 && idade < 18){
        printf("Você é um adolescente.\n");
    } else if (idade >= 18 && idade < 60){
        printf("Você é um adulto.\n");
    } else {
        printf("Você é um idoso.\n");
    }
*/
    if (idade > 60){
        printf("Você é um idoso\n");
    } else if (idade >= 18 && idade < 18){
        printf("Você um adolescente");
    } else if (idade >= 18 && idade < 60){
        printf("Você é um adulto\n");
    } else {
        printf("Você é uma criança\n");
    }
}