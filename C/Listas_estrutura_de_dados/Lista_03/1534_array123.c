#include <stdio.h>

int main(){

    int tamanho_array;

    while(scanf("%d", &tamanho_array) != EOF){
        int i, j;
        int final_array = tamanho_array - 1;

        for(i = 0; i < tamanho_array; i++){
            for(j = 0; j < tamanho_array; j++){
                if(j == final_array)
                    printf("2");
                else if(j == i)
                    printf("1");
                else
                    printf("3");
            }
            final_array--;
            printf("\n");

        }

    }
    return 0;

}
