#include <stdio.h>

int main(){
    int idade;
    float renda;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    printf("Digite sua renda\n");
    scanf("%f", &renda);

    if (idade <= 18 || idade > 60){

        if( renda < 2000){
            printf("Voc~e tem direito ao desconto\n");
        } else {
            printf("Você não tem direito ao desconto devido a renda\n");
        }
            printf("Aceito com relação a idade\n");

    } else {
        printf("Você não atende aos critérios devida a idade\n");
    }
   
}