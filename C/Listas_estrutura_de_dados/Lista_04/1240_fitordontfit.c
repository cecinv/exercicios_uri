#include <stdio.h>

int main(){

    int testes, j;
    scanf("%d", &testes);

    char str_num1[100], str_num2[100];
    int tamanho_num1, tamanho_num2;

    for(j = 0; j < testes; j++){
        long long int numero1, numero2;
        scanf("%lld %lld", &numero1, &numero2);

        sprintf(str_num1, "%d", numero1);
        sprintf(str_num2, "%d", numero2);

        tamanho_num1 = strlen(str_num1);
        tamanho_num2 = strlen(str_num2);

        int i;
        int condicao;
        int varrer_num1 = tamanho_num1 - 1;

        if(tamanho_num2 > tamanho_num1)
            condicao = 0;
        else{
            for(i = tamanho_num2 - 1; i > 0; i--){
                if(str_num2[i] == str_num2[varrer_num1]){
                    printf("%s e %s", str_num2[i], str_num2[varrer_num1]);
                    varrer_num1--;
                    condicao = 1;
                }
                else
                    condicao = 0;
                    break;
                }
            }
        if(condicao == 0){
            printf("nao encaixa\n");
        }
        else if(condicao == 1){
            printf("encaixa\n");
        }

        }

    return 0;

}
