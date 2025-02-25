#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Esolha umas das opções: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;

            printf("Digite um número de 0 a 9: ");
            scanf("%d", palpite);

            if (numeroSecreto == palpite){
                printf("Você acertou!\n");
                printf("Número secreto %d", numeroSecreto);
            } else {
                printf("Você errou!\n");
                printf("Número secreto %d", numeroSecreto);
            }
            break;

        case 2:
            int opcaoRegras;

            printf("A explicação das regras\n");

            printf("Digite a opção sobre as regras do jogo\n");
            printf("Opção 1:\n");
            printf("Opção 2:\n");
            scanf("%d", &opcaoRegras);

            switch (opcaoRegras){
            case 1:
                printf("Opção 1 selecionada\n");
                break;
            case 2:
                printf("Opção 2 selecionada\n");
                break;
            default:
                printf("Opção inválida\n");
            }
            break;

        case 3:
            printf("Saindo do jogo\n");
            break;
        default:
            printf("Opção inválida\n");
    }

}