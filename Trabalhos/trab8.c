#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char mensagem1[200],mensagem2[200];
    int i,tam,j;

    printf("Digite sua mensagem: ");
    gets(mensagem1);

    for(i=0; mensagem1[i] != '\0'; i++){
        if(mensagem1[i] == ' '){
            for(j=i; mensagem1[j] != '\0'; j++){
                mensagem1[j]=mensagem1[j+1];
            }
        }
    }

    tam = strlen(mensagem1);
    j = tam-1;

    for(i=0; i<=tam; i++){
       mensagem2[i] = mensagem1[j];
       j--;
    }
    
    // Adicionando o finalizador de string para a comparação não dar erro
    mensagem2[tam] = '\0';

    if(strcmp(mensagem1, mensagem2)==0){
        printf("\nE um palindromo.");
    }else{
        printf("\nNao e um palindromo");
    }

    return 0;
}