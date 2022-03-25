#include <stdio.h>

int main() {

    int valor;
    scanf("%d", &valor);

    int qtd100 = 0;
    int qtd50 = 0;
    int qtd20 = 0;
    int qtd10 = 0;
    int qtd5 = 0;
    int qtd2 = 0;
    int qtd1 = 0;

    int resto_valor;
    resto_valor = valor;

    if (valor >= 100){
        qtd100 = valor / 100;
        resto_valor = valor % 100;
    }
    if(resto_valor >= 50){
        qtd50 = resto_valor / 50;
        resto_valor = resto_valor % 50;
    }
    if(resto_valor >= 20){
        qtd20 = resto_valor / 20;
        resto_valor = resto_valor % 20;
    }
    if(resto_valor >= 10){
        qtd10 = resto_valor / 10;
        resto_valor = resto_valor % 10;
    }
    if(resto_valor >= 5){
        qtd5 = resto_valor / 5;
        resto_valor = resto_valor % 5;
    }
    if(resto_valor >= 2){
        qtd2 = resto_valor / 2;
        resto_valor = resto_valor % 2;
    }
    if(resto_valor >= 1){
        qtd1 = resto_valor / 1;
        resto_valor = resto_valor % 1;
    }

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n"
           "%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n"
           "%d nota(s) de R$ 1,00\n", valor, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1);


    return 0;
}
