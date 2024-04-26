#include <stdio.h>
#include <stdlib.h>

void crescente (int n) {
    
    if (n >= 0) {
       crescente(n-2);
       printf("% d", n);
    }
}

 

void decrescente (int n) {
  
    if (n >= 0) {
       printf("%d ", n);
       decrescente(n-2);
    }
}




int main(){
    int valor = 20;
    printf("\n crescente  : ");
    crescente(20);
    printf("\n decrescente  : "); 
    decrescente(20);
return 0;
}
