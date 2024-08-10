#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char frase[200];
    int n,i;

    printf("Digite o numero que sua criptografia tera: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);

    printf("Escreva uma frase: ");
    gets(frase);

    for(i=0; frase[i] != '\0'; i++){
      if(frase[i] != ' '){
        frase[i] = frase[i]+n;
      }
    }

    fputs(frase,stdout);

    return 0;
}