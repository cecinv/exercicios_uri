#include <stdio.h>
#include <string.h>

int main() {

    int entradas;
    scanf("%d", &entradas);

    for(int i = 0; i < entradas; i++){
        char palavra[60];
        scanf("%s", &palavra);

        int chave;
        scanf("%d", &chave);

        int tamanho_palavra = strlen(palavra);

        for(int i = 0; i < tamanho_palavra; i++){
            int caractere = palavra[i];
            int caractere_cifra = caractere + chave;
            char caractere_cifrado;

            if(caractere_cifra <= 90){
                caractere_cifrado = caractere_cifra;
                printf("%c", caractere_cifrado);
            }
            else if(caractere_cifra > 90){
                int resto;
                resto = caractere_cifra % 90;
                caractere_cifrado = resto + 64;
                printf("%c", caractere_cifrado);

            }
        }
        printf("\n");


    }

    return 0;
}
