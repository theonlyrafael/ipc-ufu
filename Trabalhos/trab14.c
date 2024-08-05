#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char ch1,ch2,armaz1[100],armaz2[100];

    fp1 = fopen("arq1.txt","r");
    if(fp1==NULL){
        printf("Erro na criacao do arquivo1.");
        exit(1);
    }
    ch1 = fgetc(fp1);
    while(ch1!=EOF){
        putchar(ch1);
        ch1 = fgetc(fp1);
    }
    // Reposiciona o ponteiro pro começo pra ler usando fgets depois
    rewind(fp1); 

    fp2 = fopen("arq2.txt","r");
    if(fp2==NULL){
        printf("Erro na criacao do arquivo2.");
        exit(1);
    }
    ch2 = fgetc(fp2);
    while(ch2!=EOF){
        putchar(ch2);
        ch2 = fgetc(fp2);
    }
    rewind(fp2);

    fp3 = fopen("arq3.txt","ab+");
    if(fp3==NULL){
        printf("Erro na criacao do arquivo3.");
        exit(1);
    }
    
    while(fgets(armaz1,100,fp1)!=NULL){
        fputs(armaz1,fp3);
    }

    while(fgets(armaz2,100,fp2)!=NULL){
        fputs(armaz2,fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
    return 0;
}