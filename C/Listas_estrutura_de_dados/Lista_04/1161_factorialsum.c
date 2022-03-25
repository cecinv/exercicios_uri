#include <stdio.h>

int main(){

    int numero1, numero2;
    while(scanf("%d %d", &numero1, &numero2) != EOF){

        long long int fatorial1, fatorial2;

        for(fatorial1 = 1; numero1 > 1; numero1--){
            fatorial1 = fatorial1 * numero1;
        }

        for(fatorial2 = 1; numero2 > 1; numero2--){
            fatorial2 = fatorial2 * numero2;
        }

        long long int soma_fatorial;
        soma_fatorial = fatorial1 + fatorial2;

        printf("%lld\n", soma_fatorial);
    }

    return 0;

}

