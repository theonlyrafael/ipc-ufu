#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n[100],soma=0;
    
    for(int i=0; i<100;i++){
        n[i] = i;
        soma += i;
    }

    FILE *fp;
    fp = fopen("ex2.bin","wb+");
    if(fp==NULL){
        printf("Erro na criacao do arquivo.");
        exit(1);
    }

    fwrite(n,sizeof(int),100,fp);
    fclose(fp);

    fp = fopen("ex2.bin","rb"); // Modo ajustado para rb (leitura de binario)
    if(fp==NULL){
        printf("Erro na leitura do arquivo.");
        exit(1);
    }

    int leitura[100];
    fread(leitura, sizeof(int),100,fp);
    printf("Soma calculada: %d\n", soma);

    fclose(fp);

    return 0;
}