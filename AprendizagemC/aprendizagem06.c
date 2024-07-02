#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordena(char vetor[][15], int n) {
    char aux[15];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp ( vetor[i] , vetor[j]) > 0) {
                strcpy( aux, vetor[i]);
                strcpy( vetor[i] , vetor[j]);
                strcpy( vetor[j] , aux);
            }
        }
    }
}

 

int main() {
    char v[5][15] = { "ana", "maria", "cecilia", "camila", "clara" };
    ordena(v,5);
    
}
