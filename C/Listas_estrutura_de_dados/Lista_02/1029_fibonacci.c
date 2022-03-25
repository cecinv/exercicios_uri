#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int numeros;

    for (numeros = 1; numeros <= n; ++numeros){

        int x;
        scanf("%d", &x);

        int total;
        int recursivo;

        if (x == 0){
            total = 0;
            recursivo = 0;
        }else if (x == 1){
            total = 1;
            recursivo = 0;
        }else if (x == 2){
            total = 1;
            recursivo = 2;
        }else{
            int t_x = 1;
            int t_y = 1;
            int r_x = 0;
            int r_y = 0;

            int i;
            for(i = 0; i < x - 2; i++){
                total = t_x + t_y;
                t_y = t_x;
                t_x = total;
            }
            int j;
            for(j = 0; j < x - 1; j++){
                recursivo = r_x + r_y + 2;
                r_y = r_x;
                r_x = recursivo;
            }

        }

        printf("fib(%d) = %d calls = %d\n", x, recursivo, total);
    }
    return 0;
}
