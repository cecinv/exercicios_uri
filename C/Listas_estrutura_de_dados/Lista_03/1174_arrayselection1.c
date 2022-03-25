#include <stdio.h>
#include <stdlib.h>

int main(){

    float lista[10];

    for(int i = 0; i < 10; i++)
        scanf("%f", &lista[i]);

    for(int i = 0; i < 10; i++){
        if(lista[i] < 10)
            printf("A[%d] = %.1f\n", i, lista[i]);

    }


    return 0;
}
