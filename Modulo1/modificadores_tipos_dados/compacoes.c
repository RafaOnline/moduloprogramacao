#include <stdio.h>

int main (){
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000; // para ler esse valor tem que usar long long int
    int numero = 4000000000; // em int já ultrapassa o limite

    printf("Número grande positivo: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número gande: %ld\n", numeroGrande);
    printf("Número normal: %d\n", numero);

    return 0;

}