#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0 && n > 100){
        printf("Parabens");
    }
    else if (n % 2 != 0 && n < 70){
        printf("Parabens");
    }
    else{
        printf("Sinto muito!");
    }
    return 0;
}

