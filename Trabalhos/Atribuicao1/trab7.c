#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char M[20][30];
    char menor[20]="zzzzzzzzzzzzzz";
    int i,j,n;

    printf("Digite quantos nome serao digitados: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);

    for(i=0; i<n; i++){
        printf("%d nome: ",i+1);
        gets(M[i]); // Corrigido para gravar na linha certa da matriz
        if(strcmp(M[i],menor)<=0){
            strcpy(menor,M[i]);
        }
    }

    printf("O primeiro nome da lista e: ");
    fputs(menor, stdout);

    return 0;
}