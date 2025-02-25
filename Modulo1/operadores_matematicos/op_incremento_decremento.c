#include <stdio.h>

int main(){

/*
Operadores de incremento e decremento:
incremento (++)
pré - incremento ++a
pós - incremento a++
decremento (--)
pré - decremento  --a
pós - decremento a--
*/

    int numero1 = 1, resultado;
    printf("Antes incremento: %d\n", numero1);

    /*
    Pós incremento:
    resultado = numero1++

    */

    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1);
    printf("Após pós incremento - Número: %d, Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    //printf("Após incremento: %d\n", numero1);
    printf("Após pré incremento - Número: %d, Resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Após decremento: %d\n", numero1);

    resultado = numero1--;
    printf("Após pós decremento - Número: %d, Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após pré decremento - Número: %d, Resultado: %d\n", numero1, resultado);
    
}