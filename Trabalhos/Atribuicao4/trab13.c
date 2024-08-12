#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    FILE *fp;
    char palavra[100];
    char armaz[200];
    char *result;

    fp = fopen("ex4revisao.txt", "r");

    if(fp == NULL){
        printf("Erro na criacao do arquivo.");
        exit(1);
    }

    int cont = 0;

    printf("Digite qual palavra deseja saber: ");
    gets(palavra);

    while(!feof(fp)){
        result = fgets(armaz,200,fp);
        if(result != NULL) {
            char *tmp = armaz;
            while((tmp = strstr(tmp,palavra))!= NULL){
                cont++;
                tmp++;
            }
        }
    }
    printf("O numero de vezes que %s aparece no arquivo e: %d", palavra,cont);

    fclose(fp);

    return 0;
}