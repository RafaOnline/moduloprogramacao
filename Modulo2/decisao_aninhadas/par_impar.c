#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("Número positivo\n");
        if (numero % 2 == 0){
            printf("O número é par\n");
        } else {
            printf("O número é impar\n");
        }
     } else if (numero == 0){
        printf("Número é zero");
     }
        else {
            if (numero % 2 == 0){
                printf("O número é par\n");
            } else {
                printf("O número é impar\n");
            printf("Número é negativo");
        }
    }
}