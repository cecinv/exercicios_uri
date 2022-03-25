#include <stdio.h>

int main() {

    int segundos;
    scanf("%d", &segundos);

    int segundos_restantes = segundos;

    int horas = 0;
    int minutos = 0;

    if (segundos >= 3600) {
        horas = segundos / 3600;
        segundos_restantes = segundos % 3600;
    }
    if (segundos >=60){
        minutos = segundos_restantes / 60;
        segundos_restantes = segundos_restantes % 60;
    }

    printf("%d:%d:%d\n", horas, minutos, segundos_restantes);

    return 0;
}
