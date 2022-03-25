#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    int fatorial;

    for(fatorial = 1; numero > 1; numero--){
        fatorial = fatorial * numero;
    }

    printf("%d\n", fatorial);

    return 0;

}
