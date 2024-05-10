#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Aula11b-LaboratorioStrings.pdf
// Exercicio 3



int main() {
    char str[200]; printf("Texto: "); gets(str);



    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        int aux = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = aux;
    }



    printf("Texto: %s", str);
    return 0;
}
