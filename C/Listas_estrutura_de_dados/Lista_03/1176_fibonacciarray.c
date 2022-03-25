#include <stdio.h>

int main() {

    int vezes;
    int i;
    scanf("%d", &vezes);

    for(i = 0; i < vezes; i++){
        long long int numero, total, t_x, t_y;
        scanf("%lld", &numero);


        if (numero == 0){
            total = 0;
        }else if (numero == 1){
            total = 1;
        }else if (numero == 2){
            total = 1;
        }else{
            t_x = 1;
            t_y = 1;

            int j;
            for(j = 0; j < numero - 2; j++){
                total = t_x + t_y;
                t_y = t_x;
                t_x = total;
            }

        }
        printf("Fib(%lld) = %lld\n", numero, total);
    }

    return 0;
}
