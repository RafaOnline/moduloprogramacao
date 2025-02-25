#include <stdio.h>

int main(){
    int numeronormal = 2147483647; // valor máximo de int
    long long int numerogrande = 2147483647;

    printf("Número normal (int): %d\n", numeronormal);
    printf("Número grande (long int): %lld\n", numerogrande);

    numerogrande = 2147483648;
    printf("Número grande (long int): %ld\n", numerogrande); // somente ld continua a mesma quantidade de números
    printf("Número grande (long long int): %lld\n", numerogrande); // lld já funciona e aceita números maiores

    return 0;

}