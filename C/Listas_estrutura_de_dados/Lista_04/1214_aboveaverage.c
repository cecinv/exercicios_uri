#include <stdio.h>
#include <ctype.h>

int main(){

    int testes, i, j;
    scanf("%d", &testes);

    for(j = 0; j < testes; j++){
        int pessoas_classe;
        scanf("%d", &pessoas_classe);

        float nota_final[pessoas_classe];
        int total = 0;

        for(i = 0; i < pessoas_classe; i++){
            scanf("%f", &nota_final[i]);
            total = total + nota_final[i];
        }

        float media;
        media = total/pessoas_classe;

        int acima_media = 0;

        for(i = 0; i < pessoas_classe; i++){

            if(nota_final[i] > media){
                acima_media = acima_media + 1;
            }
        }

        float aux = 100.0 / pessoas_classe;
        float media_acima = aux * acima_media;

        printf("%.3f%%\n", media_acima);

    }

    return 0;
}

