#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double delta;
    delta = (B * B) - (4 * A * C);

    if (delta < 0 || A == 0){
            printf("Impossivel calcular\n");
    }else if(delta > 0){
        double R1, R2;
        R1 = ((-B + sqrt(delta)) / (2 * A));
        R2 = ((-B - sqrt(delta)) / (2 * A));
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    } else if(delta == 0){
        double R1;
        R1 = ((-B + sqrt(delta)) / (2 * A));
        printf("R1 = %.5lf\n", R1);
    }

    return 0;
}
