#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; //Valor máximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o limite do short
    printf("Número ultrapassado (short int): %d\n", numeroPequeno);

    return 0;

}