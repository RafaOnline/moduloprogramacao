/*
                    FOR

-Utilizado para loops de tamanho específico
-Ideal quando sabemos quantas vezes será executado

                ESTRUTURA

for (Inicialização; condição; incremento)
{
    //código
}

-Define valor inical
-Condição booleana
-Incremento ou decremento

            FUNCIONAMENO

-Inicialização: Apenas uma vez
-Condição: Toda execução
-Incremento: No final da execução
*/

#include <stdio.h>

int main(){

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}