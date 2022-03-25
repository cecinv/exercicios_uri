#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, par, numero_quadrado;
    scanf("%d", &numero);

    par = 1;

    while (par <= numero){
        if(par % 2 == 0){
            numero_quadrado = par * par;
            printf("%d^2 = %d\n", par, numero_quadrado);
        }
        par++;
    }


    return 0;
}
