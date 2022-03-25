#include <stdio.h>

int main() {

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    double media;

    media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}
