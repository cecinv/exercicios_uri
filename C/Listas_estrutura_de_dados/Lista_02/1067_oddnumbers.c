#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, impar;
    scanf("%d", &numero);
    impar = 1;

    while (impar <= numero){
        if (impar % 2 != 0){
            printf("%d\n", impar);
        }
        impar++;

    }


    return 0;
}
