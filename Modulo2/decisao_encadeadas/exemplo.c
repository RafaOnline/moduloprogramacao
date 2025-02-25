#include <stdio.h>

int main(){
    int condicao1, condicao2;

    //estrutura aninhada
    if(condicao1){
        if (condicao2){
            //código é executado se condição 1 e condição 2 forem verdadeiras
        }
    }

    //estrutura encadeada
    if(condicao1){
        // Código a ser executado se condicao1 for verdadeira
    } else if (condicao2){
        // código a ser executado se condicao1 for fala e condicao2 for verdadeira
    } else {
        // código a ser executado ser as condições anteriores forem falsas
    }
}

    