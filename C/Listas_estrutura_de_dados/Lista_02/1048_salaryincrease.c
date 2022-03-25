#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;
    scanf("%f", &salario);

    float novo_salario, reajuste;
    int percentual;

    if (salario > 0 && salario <= 400){
        novo_salario = salario * 1.15;
        reajuste = novo_salario - salario;
        percentual = 15;
    }

    if (salario > 400 && salario <= 800){
        novo_salario = salario * 1.12;
        reajuste = novo_salario - salario;
        percentual = 12;
    }

    if (salario > 800 && salario <= 1200){
        novo_salario = salario * 1.10;
        reajuste = novo_salario - salario;
        percentual = 10;
    }

    if (salario > 1200 && salario <= 2000){
        novo_salario = salario * 1.07;
        reajuste = novo_salario - salario;
        percentual = 7;
    }

    if (salario > 2000){
        novo_salario = salario * 1.04;
        reajuste = novo_salario - salario;
        percentual = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novo_salario, reajuste, percentual);



    return 0;

}
