#include <stdio.h>

int main() {

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    float tr_rec = (a * c) / 2;
    float circ = 3.14159 * (c * c);
    float trapezio = ((a + b) * c) / 2;
    float quadrado = b * b;
    float ret = a * b;

    printf("TRIANGULO: %.3f\n", tr_rec);
    printf("CIRCULO: %.3f\n", circ);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", ret);


    return 0;
}
