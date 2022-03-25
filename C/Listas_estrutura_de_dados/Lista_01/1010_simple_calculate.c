#include <stdio.h>

int main() {

    int cod1, qtd1;
    float valor1;
    int cod2, qtd2;
    float valor2;

    scanf("%d %d %f", &cod1, &qtd1, &valor1);
    scanf("%d %d %f", &cod2, &qtd2, &valor2);

    float total;
    total = (qtd1 * valor1) + (qtd2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
