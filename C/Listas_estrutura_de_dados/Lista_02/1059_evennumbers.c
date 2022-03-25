#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    numero = 1;

    while (numero <= 100){
        if (numero % 2 == 0){
            printf("%d\n", numero);
        }
        numero++;

    }


    return 0;
}
