/*
    DO-WHILE

-Variante do "WHILE"
-Garante execução pelo menos uma vez

    ESTRUTURA

do {
    //código
} while (condição)

    VANTAGENS

-Execução garantida
-útil para solicitações de entrada do úsuario
-útil para menus interativos
-Verificação de condição posterior
*/

#include <stdio.h>

int main(){

    int i = 1;

    do {

        printf("%d\n", i);
        i++;
        
    } while (i <= 5);

    return 0;
}