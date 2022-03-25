#include <stdio.h>
#include <string.h>

int main(){

    int qntd_numeros, j;
    scanf("%d", &qntd_numeros);

    for(j = 0; j < qntd_numeros; j++){
        char numero[20];
        scanf("%s", &numero);

        if(strlen(numero) == 5){
            printf("3\n");
        } else if(numero[0] == 't' && numero[1] == 'w' || numero[0] == 't' && numero[2] == 'o' || numero[1] == 'w' && numero[2] == 'o'){
            printf("2\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}
