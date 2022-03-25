#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra01[100], palavra02[100], palavra03[100];
    scanf("%s", &palavra01);
    scanf("%s", &palavra02);
    scanf("%s", &palavra03);

    if (strcmp(palavra01, "vertebrado") == 0){
        if (strcmp(palavra02, "ave") == 0){
            if (strcmp(palavra03, "carnivoro") == 0){
                printf("aguia\n");}
            if (strcmp(palavra03, "onivoro") == 0){
                printf("pomba\n");}
            }

            if (strcmp(palavra02, "mamifero") == 0){
                if (strcmp(palavra03, "onivoro") == 0){
                printf("homem\n");}
                if (strcmp(palavra03, "herbivoro") == 0){
                printf("vaca\n");}
            }
        }

    if (strcmp(palavra01, "invertebrado") == 0){
        if (strcmp(palavra02, "inseto") == 0){
            if (strcmp(palavra03, "hematofago") == 0){
                printf("pulga\n");}
            if (strcmp(palavra03, "herbivoro") == 0){
                printf("lagarta\n");}
            }

            if (strcmp(palavra02, "anelideo") == 0){
                if (strcmp(palavra03, "hematofago") == 0){
                printf("sanguessuga\n");}
                if (strcmp(palavra03, "onivoro") == 0){
                printf("minhoca\n");}
            }
        }

    return 0;

}
