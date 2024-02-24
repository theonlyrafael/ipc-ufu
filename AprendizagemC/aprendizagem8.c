#include <stdio.h>
#include <stdlib.h>

void ordena(float *vetor, int n) {
    int aux;
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
}

 

int main() {
    float v[10] = {69, 45, 32, 98, 1, 2, 10, 24, 9, 57}; 
    float *v1 = malloc (10 * sizeof(float));
    ordena(v,10);
    for (int i = 0; i < 10; i++)
        printf("%2.f ", v[i]);
}