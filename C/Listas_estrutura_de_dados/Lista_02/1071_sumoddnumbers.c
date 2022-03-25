#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, lista[2];
    int i;

    for(i = 0; i < 2; i++){
        scanf("%d", &lista[i]);
    }

    if(lista[0] > lista[1]){
        int armazena = lista[0];
        lista[0] = lista[1];
        lista[1] = armazena;
    }

    int numero = lista[0];

    if (numero % 2 != 0){
            numero = numero + 1;
    }

    int soma = 0;

    while(numero < lista[1]){
        if (numero % 2 != 0){
            soma = soma + numero;
        }
        numero++;
    }

    printf("%d\n", soma);


    return 0;

}
