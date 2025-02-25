#include <stdio.h>

int main(){
    /*
    if (condição){
        // bloco de código a ser executado se a condição for verdadeira
    } else {
        // bloco de código a ser executado se a condição for falsa
     }
    */

    int numero1;
    int numero2;

    numero1 = 10;
    numero2 = 50;

    if(numero1 > numero2){
        printf("Número 1 é maior\n");
    } else {
        printf("Número 2 é maior\n");
    }
}