#include <stdio.h>
#include <stdlib.h>

int main() {
    float h, resultado;
    char sexo;

    printf("Digite o sexo [M] ou [F]: ");
    scanf(" %c", &sexo);

    printf("Digite a altura em metros: ");
    scanf("%f", &h);

    if (sexo == 'M' || sexo == 'm') {
        resultado = 72.7f * h - 58.0f;
    }
    else if (sexo == 'F' || sexo == 'f') {
        resultado = 62.1f * h - 44.7f;
    }
    else {
        printf("Sexo invalido.\n");
        return 1;
    }

    printf("O peso ideal para a pessoa eh de: %.2f kg\n", resultado);

    return 0;
}