#include <stdio.h>
#define MATRIZ 12

int main() {

    int linha;
    scanf("%d", &linha);

    char operacao[2];
    scanf("%s", &operacao);

    double resultado = 0.0;

    int i, j;
    double matriz[MATRIZ][MATRIZ];

    for (i = 0; i < MATRIZ; i++){
        for(j = 0; j < MATRIZ; j++){
            scanf("%lf", &matriz[i][j]);

        if (i == linha){
            resultado += matriz[i][j];
            }
        }
    }

    if (operacao[0] == 'S'){
        printf("%.1lf\n", resultado);
    }
    else if (operacao[0] == 'M'){
        double divisor = (double) MATRIZ;
        double media = resultado / divisor;
        printf("%.1lf\n", media);
    }

    return 0;
}

