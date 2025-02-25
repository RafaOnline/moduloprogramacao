#include <stdio.h>

int main(){
    int idade;
    float renda;
    int numeroDependentes;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    printf("Digite sua renda\n");
    scanf("%f", &renda);

    printf("Digite o número de dependentes\n");
    scanf("%d", &numeroDependentes);

    if(idade >= 18 && idade <= 65){
        if (renda < 3000){
            if(numeroDependentes >= 2){
                printf("Você passou nos critérios!");
            } else {
                printf("Você não tem atende os números de dependentes\n");
            }
        } else {
            printf("Você não tem renda suficiente\n");
        }
    } else {
        printf("Você não atende ao critério de idade\n");
    }
}