#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ponto{
  float X, Y;
};

struct retangulo{
   struct ponto pS;
   struct ponto pI;
};

int main(){
    setlocale(LC_ALL, "portuguese");
    struct retangulo r;
    float px,py;

    printf("Ponto superior esquerdo\n");
    printf("X: ");
    scanf("%f",&r.pS.X);
    printf("Y: ");
    scanf("%f", &r.pS.Y);
    printf("Ponto inferior direito\n");
    printf("X: ");
    scanf("%f",&r.pI.X);
    printf("Y: ");
    scanf("%f", &r.pI.Y);
    printf("Agora informe um ponto qualquer:\n");
    printf("X:");
    scanf("%f",&px);
    printf("Y:");
    scanf("%f",&py);

    if(px>r.pI.X || px<r.pS.X || py>r.pS.Y || py<r.pI.Y){
        printf("O ponto (%.1f,%.1f) esta fora do retangulo.",px,py);
    }else{
        printf("O ponto (%.1f,%.1f) esta dentro do retangulo.",px,py);
    }

    return 0;
}