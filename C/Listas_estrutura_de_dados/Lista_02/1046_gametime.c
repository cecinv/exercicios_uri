#include <stdio.h>
#include <stdlib.h>

int main(){

    int hora_inicial, hora_final;
    scanf("%d", &hora_inicial);
    scanf("%d", &hora_final);

    int duracao;

    if (hora_inicial > hora_final){
        duracao = abs(hora_inicial - 24) + hora_final;
    } else if (hora_final > hora_inicial){
        duracao = hora_final - hora_inicial;
    } else if (hora_inicial == hora_final){
        duracao = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);


    return 0;
}
