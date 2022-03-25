#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, incremento, resultado;
    scanf("%d", &numero);

    for(incremento = 1; incremento <= 10; incremento++){
        resultado = numero * incremento;
        printf("%d x %d = %d\n", incremento, numero, resultado);
    }

    return 0;
}
