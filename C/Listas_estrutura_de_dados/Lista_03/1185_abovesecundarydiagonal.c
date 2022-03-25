#include <stdio.h>
#define MATRIZ 12

int main() {

    char operacao[2];
    scanf("%s", &operacao);

    double resultado = 0.0;

    int i, j;
    int coluna = MATRIZ - 2;
    int contador = 0;
    double matriz[MATRIZ][MATRIZ];

    for (i = 0; i < MATRIZ; i++){
        for(j = 0; j < MATRIZ; j++){
            scanf("%lf", &matriz[i][j]);

            if (j <= coluna){
                resultado += matriz[i][j];
                contador += 1;
                }
        }
        coluna = coluna - 1;
    }

    if (operacao[0] == 'S'){
        printf("%.1lf\n", resultado);
    }
    else if (operacao[0] == 'M'){
        double media = resultado / contador;
        printf("%.1lf\n", media);
    }

    return 0;
}

