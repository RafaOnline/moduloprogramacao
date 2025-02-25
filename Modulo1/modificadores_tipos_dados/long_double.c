#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589193;
    long double numeroMuitoPreciso = 3.14159265358919353589193;
    //double numeroMuitoPreciso = 3.14159265358919353589193;

    // long double não funciona direito no windows, double já funciona melhor

    printf("Número preciso: %.15f\n", numeroPreciso);
    printf("Número muito preciso: %.21lf\n", numeroMuitoPreciso);

    return 0;

}