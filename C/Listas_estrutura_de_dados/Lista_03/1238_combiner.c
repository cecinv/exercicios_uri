#include <stdio.h>
#include <string.h>

int main() {

    int entradas;

    char string_a[64];
    char string_b[64];
    char string_uniao[128];

    scanf("%d", &entradas);

    for(int i = 0; i < entradas; i++){
        scanf("%s%s", string_a, string_b);

        int tamanho_str_a, tamanho_str_b;

        tamanho_str_a = strlen(string_a);
        tamanho_str_b = strlen(string_b);

        int j;

        if(tamanho_str_a < tamanho_str_b){
            for(j = 0; j < tamanho_str_a * 2; j += 2){
                string_uniao[j] = string_a[j / 2];
                string_uniao[j + 1] = string_b[j / 2];
            }

            for(j; j < (tamanho_str_a * 2) + tamanho_str_b; j++){
                string_uniao[j] = string_b[j - tamanho_str_a];
            }
        } else if (tamanho_str_a >= tamanho_str_b){
            for(j = 0; j < tamanho_str_b * 2; j += 2){
                string_uniao[j] = string_a[j / 2];
                string_uniao[j + 1] = string_b[j / 2];
            }

            for(j; j < (tamanho_str_b * 2) + tamanho_str_a; j++){
                string_uniao[j] = string_a[j - tamanho_str_b];
            }
        }

        string_uniao[j+1] = '\0';
        printf("%s\n", string_uniao);
    }


    return 0;
}
