#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char frase[100],aux;
    int i,tam,j;

    printf("Digite sua frase: ");
    gets(frase);

    tam = strlen(frase);
    j = tam-1;

    for(i=0; i<=(tam/2); i++){
       aux = frase[i];
       frase[i] = frase[j];
       frase[j] = aux;
       j--;
    }

    fputs(frase,stdout);

    return 0;
}