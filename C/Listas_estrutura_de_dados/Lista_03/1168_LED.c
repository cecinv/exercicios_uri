#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_testes;
    char numero_string[10^100];
    scanf("%d", &qtd_testes);

    for(int i = 1; i <= qtd_testes; i++){
        scanf("%s", &numero_string);
        int soma_leds = 0;

        for(int i = 0; i < strlen(numero_string); i++){
            if ((numero_string[i]) == '0')
                soma_leds = soma_leds + 6;
            if ((numero_string[i]) == '1')
                soma_leds = soma_leds + 2;
            if ((numero_string[i]) == '2')
                soma_leds = soma_leds + 5;
            if ((numero_string[i]) == '3')
                soma_leds = soma_leds + 5;
            if ((numero_string[i]) == '4')
                soma_leds = soma_leds + 4;
            if ((numero_string[i]) == '5')
                soma_leds = soma_leds + 5;
            if ((numero_string[i]) == '6')
                soma_leds = soma_leds + 6;
            if ((numero_string[i]) == '7')
                soma_leds = soma_leds + 3;
            if ((numero_string[i]) == '8')
                soma_leds = soma_leds + 7;
            if ((numero_string[i]) == '9')
                soma_leds = soma_leds + 6;

        }

        printf("%d leds\n", soma_leds);

    }


    return 0;

}
