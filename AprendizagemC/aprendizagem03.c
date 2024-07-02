#include <stdio.h>
#include <stdlib.h>
 
 int main(){
    int n = 20;
    int vetA[n], vetB[n], i;
    for (i = 0; i < 20; i++){
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &vetA[i]);
    }
    
    for (i = 0; i < 20; i++){
        printf("%d\n", vetA[i]);
    }
    
    for (i = 0; i < 20; i++){
        vetB[i] = vetA[n-1];
        n--;
    
    }
    for (i = 0; i < 20; i++){
        printf("%d\n", vetB[i]);
    }

return 0;

 }