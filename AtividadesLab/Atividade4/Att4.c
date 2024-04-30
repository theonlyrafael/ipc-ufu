#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Entre com \"a b c\" de ax^2+by+c: ");
    scanf(" %f %f %f", &a, &b, &c );
    delta = b * b - 4 * a * c;
    if (a == 0) printf("Sinto muito, nao eh eq 2o grau!");
    else if (delta < 0)
        printf("Nao tem raizes.");
    else if (delta == 0) {
        x1 = -b / (2 * a); printf("Raiz %f", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes %f e %f", x1, x2);
    }
}
