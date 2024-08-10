#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char palavra[100];

  printf("Digite uma palavra: ");
  gets(palavra);

  for(int i=0; palavra[i] != '\0'; i++){
    if(palavra[i]>=97 && palavra[i]<=122){
        palavra[i] = palavra[i]-32;
    }
  }
   fputs(palavra,stdout);

  return 0;
}