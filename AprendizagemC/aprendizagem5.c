#include <stdio.h>
int main(){
    float calcularAreaRetang(float x, float y);
    float area = calcularAreaRetang(10, 20);
    printf("A area eh: %1.f", area);

    return 0;
}

float calcularAreaRetang(float base, float altura){
    
    return base * altura;  
}