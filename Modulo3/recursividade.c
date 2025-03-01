/*
    Recursividade
(Bloco de código que é criado para ser chamado e executado)

Void nomeDoBloco (){
    //Código
}
*/

#include <stdio.h>

void recursivo(int numero){
    if (numero > 0){
        // forma crescente antes
        recursivo(numero - 1);
        printf("%d \n", numero);
       // forma decrescente depois: recursivo(numero - 1);
    }
}

int main(){

    int quantidade = 10;

    printf("Contagem regressiva: \n");
    recursivo(quantidade);


    return 0;
}