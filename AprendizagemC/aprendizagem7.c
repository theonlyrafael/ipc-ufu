#include <stdio.h>
#include <stdlib.h>

typedef struct Atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
    float peso;
}atleta;

void imprimeAtleta(atleta *B){
    printf("Nome do atleta: ");
    gets(B->nome);
    printf("Esporte: ");
    gets(B->esporte);
    printf("Idade: ");
    scanf("%d", &B->idade);
    printf("Altura: ");
    scanf("%f", &B->altura);
    printf("Peso: ");
    scanf("%f", &B->peso);
    setbuf(stdin,NULL);
}


int main(){
    atleta A[5];
    float maiorAltura = A[0].altura;
    int i;

    for(i = 0; i < 5; i++){
       imprimeAtleta(&A[i]);
    }
    
    for(i = 0; i < 5; i++){
        if (A[i].altura > maiorAltura)
        {
            maiorAltura = A[i].altura;
        }
        
    }
    
     for (i = 0; i < 5; i++){
        if (maiorAltura == A[i].altura)
        {
            printf("\n Mais alto %s com altura %f", A[i].nome, A[i].altura);
        }
    }
return 0;
}    



