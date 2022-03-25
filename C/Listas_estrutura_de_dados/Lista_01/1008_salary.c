#include <stdio.h>

int main() {

    int numero, horas;
    float salario_hora;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &salario_hora);

    float salario_total;

    salario_total = salario_hora * horas;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario_total);

    return 0;
}
