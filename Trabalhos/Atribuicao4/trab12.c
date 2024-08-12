#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    FILE *fp;
    char linhas[200];
    char *result;
    
    fp = fopen("ex4revisao.txt","r");

    if(fp == NULL){
        printf("Erro na criacao do arquivo.");
        exit(1);
    }

    int cont = 0;

    while(!feof(fp)){
        result = fgets(linhas,200,fp);
        if(result){
            cont++;
        }
    }

    printf("O numero de linhas do arquivo e: %d", cont);

    fclose(fp);

    return 0;
}