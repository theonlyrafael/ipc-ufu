#include <stdio.h>
#include <stdlib.h>

int main(){

   int vet[10];
   int par, impar;
   for(int i = 0; i<10; i++){
    printf("Digite 10 numeros: ");
    scanf("%d", &vet[i]);
   }

   for(int i = 0; i<10; i++){
      if(vet[i] % 2 == 0){
        par = vet[i];
    }
    else{
        impar = vet[i];
    }
    printf("%d\n", par);
    printf("%d\n", impar);

    return 0;
   }



}
