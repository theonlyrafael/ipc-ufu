#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5], vetMaior, i;
    for(i = 0; i < 5; i++){
        printf("Digite cinco numeros: ", i + 1);
        scanf("%d", &vet[i]);
    }
    vetMaior = vet[0];
    for (i = 1; i < 5; i++){
        if(vet[i] > vetMaior){
            vetMaior = vet[i];
        }
    }
    printf("Maior elemento: %d", vetMaior);
    
     return 0;
        
    }
    
   
        
    
    


