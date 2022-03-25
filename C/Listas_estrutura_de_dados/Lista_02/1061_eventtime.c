#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia_inicio, hi, mi, si;
    char dia[4];
    scanf("%s%d", &dia, &dia_inicio);
    scanf("%d : %d : %d", &hi, &mi, &si);

    int dia_termino, ht, mt, st;
    scanf("%s%d", &dia, &dia_termino);
    scanf("%d : %d : %d", &ht, &mt, &st);

    int dias;
    dias = dia_termino - dia_inicio;

    int segundos_dias;
    segundos_dias = dias * 24 * 60 * 60;

    int segundos_inicial, segundos_final;
    segundos_inicial = si + (mi * 60) + (hi * 60 * 60);
    segundos_final = st + (mt * 60) + (ht * 60 * 60);

    int segundos_totais;
    segundos_totais = segundos_dias - segundos_inicial + segundos_final;

    int horas_totais, segundos_restantes;
    horas_totais = segundos_totais / 3600;
    segundos_restantes = segundos_totais % 3600;

    int minutos, segundos;
    minutos = segundos_restantes / 60;
    segundos = segundos_restantes % 60;

    int dias_f, horas;
    dias_f = horas_totais / 24;
    horas = horas_totais % 24;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias_f, horas, minutos, segundos);

    return 0;
}
