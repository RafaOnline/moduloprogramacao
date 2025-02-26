/*
    WHILE
-Executa repetidamente
-Depende de uma condição verdadeira
-Termina quando a condição se torna falsa

    ESTRUTURA

-Nome da estrutura
-(Condição)
-{Código}

while (condição){
    // código
}

-Condição é booleana
*/

#include <stdio.h>

int main(){

    int i = 1;

    while(i <= 10)
    {
        printf("%d\n", i);
        i++;
    }


    return 0;
}
