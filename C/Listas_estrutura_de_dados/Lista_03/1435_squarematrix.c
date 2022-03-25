#include <stdio.h>

int main(){
    int input;

    do{
        scanf("%d", &input);

        if(input == 0){
            break;
        }

        int i, j, k, m_input;
        int matriz[input][input];
        m_input = input / 2;

        if (input % 2 == 1){
            m_input++;
        }

        int linha, coluna;
        linha = 0;
        coluna = input - 1;

        for(i = 1; i <= m_input; i++){
            for (j = linha; j <= coluna; j++){
                for(k = linha; k <= coluna; k++){
                    matriz[j][k] = i;
                }
            }
            linha++; coluna--;
        }

        for(j = 0; j < input; j++){
            for(k = 0; k < input; k++){
                if(k == 0){
                    printf("%3d", matriz[j][k]);
                } else {
                    printf(" %3d", matriz[j][k]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }while(input != 0);

    return 0;

}
