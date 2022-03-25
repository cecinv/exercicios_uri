#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    float media;
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    printf("Media: %.1f\n", media);

    if (media >= 7){
        printf("Aluno aprovado.\n");
    } else if (media < 5){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        float n5;
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);

        float nova_media;
        nova_media = (media + n5) / 2;

        if (nova_media >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", nova_media);
        } else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", nova_media);
        }

    }


    return 0;
}
