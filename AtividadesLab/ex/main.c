#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y;
    printf("Digite o valor de x:");
    scanf("%d", &x);

    while (x < 10){
        y = x + 1;
        x++;
    }
    if (y = 10){
        printf("Excelente");
    }
    else {
        printf("Se ferrou");
    }

    return 0;
}
