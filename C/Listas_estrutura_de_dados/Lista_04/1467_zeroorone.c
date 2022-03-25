#include <stdio.h>

int main(){

    int numero1, numero2, numero3;

    while(scanf("%d %d %d", &numero1, &numero2, &numero3) != EOF){
        if((numero1 == 0 && numero2 == 1 && numero3 == 1) || (numero1 == 1 && numero2 == 0 && numero3 == 0))
            printf("A\n");
        else if ((numero1 == 1 && numero2 == 0 && numero3 == 1) || (numero1 == 0 && numero2 == 1 && numero3 == 0))
            printf("B\n");
        else if ((numero1 == 1 && numero2 == 1 && numero3 == 0) || (numero1 == 0 && numero2 == 0 && numero3 == 1))
            printf("C\n");
        else if ((numero1 == 1 && numero2 == 1 && numero3 == 1) || (numero1 == 0 && numero2 == 0 && numero3 == 0))
            printf("*\n");

        }


    return 0;
}

