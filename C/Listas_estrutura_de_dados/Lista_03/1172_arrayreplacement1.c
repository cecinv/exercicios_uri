#include <stdio.h>
#include <stdlib.h>

int main(){

    int lista[10];

    for(int i = 0; i < 10; i++)
        scanf("%d", &lista[i]);

    for(int i = 0; i < 10; i++)
        if (lista[i] <= 0)
            lista[i] = 1;

    for(int i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, lista[i]);

    return 0;
}
