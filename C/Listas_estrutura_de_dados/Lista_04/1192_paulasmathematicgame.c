#include <stdio.h>
#include<ctype.h>

int main(){

    int testes, i;
    scanf("%d", &testes);

    for(i = 0; i < testes; i++){
        char operacao;
        int numero1, numero2;
        scanf("%d %c %d", &numero1, &operacao, &numero2);

        if(numero1 == numero2){
            int multiplicacao = numero1 * numero2;
            printf("%d\n", multiplicacao);
        } else if(islower(operacao)){
            int soma = numero1 + numero2;
            printf("%d\n", soma);
        } else if(isupper(operacao)){
            int subtracao = numero2 - numero1;
            printf("%d\n", subtracao);
        }
    }

    return 0;
}

