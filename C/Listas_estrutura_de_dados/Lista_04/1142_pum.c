#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);

    int numero_pum = numero * 4;

    for(int i = 1; i <= numero_pum; i++){
        if (i % 4 == 0){
            printf("PUM\n");
        } else {
            printf("%d ", i);
        }

    }

    return 0;
}
