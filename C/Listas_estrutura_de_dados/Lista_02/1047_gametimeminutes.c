#include <stdio.h>
#include <stdlib.h>

int main(){

    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    scanf("%d", &hora_inicial);
    scanf("%d", &minuto_inicial);
    scanf("%d", &hora_final);
    scanf("%d", &minuto_final);

    int minutos_totais_i, minutos_totais_f;

    minutos_totais_i = (hora_inicial * 60) + minuto_inicial;
    minutos_totais_f = (hora_final * 60) + minuto_final;

    int minutos_duracao, duracao, minuto;

    if (minutos_totais_f > minutos_totais_i){
        minutos_duracao = minutos_totais_f - minutos_totais_i;
        duracao = minutos_duracao / 60;
        minuto = minutos_duracao % 60;
    }

    if (minutos_totais_i == minutos_totais_f){
        duracao = 24;
        minuto = 0;
    }

    if (minutos_totais_i > minutos_totais_f){
        minutos_duracao = minutos_totais_i - minutos_totais_f;
        minutos_duracao = (24*60) - minutos_duracao;
        duracao = minutos_duracao / 60;
        minuto = minutos_duracao % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao, minuto);

    return 0;

}
