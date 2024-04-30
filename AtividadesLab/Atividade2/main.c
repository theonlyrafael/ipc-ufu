#include <stdio.h>
#include <stdlib.h>

int main(){
    char Rock, Paper, Scissors;
    float vencedor;
    printf("AAAAAdo primeiro jogador: ");
    scanf("%c, %c, %c", &Rock, &Paper, &Scissors);
    printf("Movimento do segundo jogador: ");
    scanf("%c, %c, %c", &Rock, &Paper, &Scissors);
    if (Rock == 'R' && Paper == 'P'){
        return 1;
    }
    else if (Rock == 'R' && Scissors == 'S'){
        vencedor = 'R';
    }
    else if (Paper == 'P' && Scissors == 'S'){
        vencedor = 'S';
    }
    getchar();
}
