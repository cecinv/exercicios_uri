#include <stdio.h>

int main() {

    char nome;
    float salario;
    float vendas;

    scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);

    float salario_com_bonus = ((15 * vendas)  / 100) + salario;

    printf("TOTAL = R$ %.2f\n", salario_com_bonus);

    return 0;
}
