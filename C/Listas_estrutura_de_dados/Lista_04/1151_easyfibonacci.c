#include <stdio.h>

int main(){

        long long int numero;
        int total = 0, t_x = 0, t_y = 1;
        scanf("%lld", &numero);


        for(int i = 1; i < numero; i++){
            if(i % 2 == 1){
                printf("%d ", total);
                total = t_x + t_y;
                t_x = total;
            }

            else if(i == 2){
                printf("%d ", total);
            }

            else if(i % 2 == 0){
                printf("%d ", total);
                total = t_x + t_y;
                t_y = total;
            }
        }
        printf("%d\n", total);

    return 0;
}
