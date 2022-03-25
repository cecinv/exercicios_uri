#include <stdio.h>

int main() {

    float valor;
    scanf("%f", &valor);

    int qtd100 = 0;
    int qtd50 = 0;
    int qtd20 = 0;
    int qtd10 = 0;
    int qtd5 = 0;
    int qtd2 = 0;

    int qtd1 = 0;
    int qtdm50 = 0;
    int qtdm25 = 0;
    int qtdm10 = 0;
    int qtdm5 = 0;
    int qtdm1 = 0;

    float transformar_valor;
    transformar_valor = (valor + 0.001) * 100;   // Adicionado o 0.001 por algum erro do URI, recomendado no fórum

    int resto_valor;
    resto_valor = transformar_valor;

    if (resto_valor >= 10000){
        qtd100 = resto_valor / 10000;
        resto_valor = resto_valor % 10000;
    }
    if(resto_valor >= 5000){
        qtd50 = resto_valor / 5000;
        resto_valor = resto_valor % 5000;
    }
    if(resto_valor >= 2000){
        qtd20 = resto_valor / 2000;
        resto_valor = resto_valor % 2000;
    }
    if(resto_valor >= 1000){
        qtd10 = resto_valor / 1000;
        resto_valor = resto_valor % 1000;
    }
    if(resto_valor >= 500){
        qtd5 = resto_valor / 500;
        resto_valor = resto_valor % 500;
    }
    if(resto_valor >= 200){
        qtd2 = resto_valor / 200;
        resto_valor = resto_valor % 200;
    }
    if(resto_valor >= 100){
        qtd1 = resto_valor / 100;
        resto_valor = resto_valor % 100;
    }
    if(resto_valor >= 50){
        qtdm50 = resto_valor / 50;
        resto_valor = resto_valor % 50;
    }
    if(resto_valor >= 25){
        qtdm25 = resto_valor / 25;
        resto_valor = resto_valor % 25;
    }
    if(resto_valor >= 10){
        qtdm10 = resto_valor / 10;
        resto_valor = resto_valor % 10;
    }
    if(resto_valor >= 5){
        qtdm5 = resto_valor / 5;
        resto_valor = resto_valor % 5;
    }
    if(resto_valor >= 1){
        qtdm1 = resto_valor / 1;
        resto_valor = resto_valor % 1;
    }


    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n"
           "%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n"
           "%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n"
           "%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1, qtdm50, qtdm25, qtdm10, qtdm5, qtdm1);


    return 0;
}
