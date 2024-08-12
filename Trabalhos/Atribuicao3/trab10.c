#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

struct ponto{
  float X, Y;
};

struct retangulo{
   struct ponto pS;
   struct ponto pI;
};

int main(){
    setlocale(LC_ALL, "portuguese");
    float area, perimetro, diagonal,l,h;
    struct retangulo r;

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

    l = (r.pI.X)-(r.pS.X); // Ajustado para não dar comprimento negativo
    h = (r.pS.Y)-(r.pI.Y); // Ajustado para não dar altura negativa

    area = l*h;
    perimetro = (2*l)+(2*h);
    diagonal = sqrt(pow(h,2)+pow(l,2));

    printf("\nArea: %.2f\nPerimetro: %.2f\nDiagonal: %.2f", area,perimetro,diagonal);

    return 0;
}