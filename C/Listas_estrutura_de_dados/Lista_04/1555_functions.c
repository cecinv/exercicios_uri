#include <stdio.h>

int rafael(x, y){
    int resultado;
    resultado = ((3 * x) * (3 * x)) + (y * y);
    return resultado;
}

int beto(x, y){
    int resultado;
    resultado = ((2 * (x * x)) + ((5 * y) * (5 * y)));
    return resultado;
}

int carlos(x, y){
    int resultado;
    resultado = (-100 * x) +( y * y * y);
    return resultado;
}

int main(){

    int testes, j, numero1, numero2;
    scanf("%d", &testes);

    for(j = 0; j < testes; j++){
        scanf("%d %d", &numero1, &numero2);
        int resultado_rafael = rafael(numero1, numero2);
        int resultado_beto = beto(numero1, numero2);
        int resultado_carlos = carlos(numero1, numero2);

        if(resultado_rafael > resultado_beto && resultado_rafael > resultado_carlos){
            printf("Rafael ganhou\n");
        } else if (resultado_beto > resultado_rafael && resultado_beto > resultado_carlos){
            printf("Beto ganhou\n");
        } else if (resultado_carlos > resultado_rafael && resultado_carlos > resultado_beto){
            printf("Carlos ganhou\n");
        }
    }

    return 0;

}
