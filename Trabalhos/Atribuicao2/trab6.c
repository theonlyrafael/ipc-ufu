#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int n){
  long long int fat=1;
  for(int i=1; i<=n; i++){
    fat = fat*i;
  }
  return fat;
}

double e(int N){
   double E = 0;
   for(int n=0; n<N; n++){
    E += 1/(double)fatorial(n);
   }
   return E;
}

int main(){
    int N;
    double E;

    printf("Digite N: ");
    scanf("%d", &N);

    E = e(N);

    printf("e = %lf", E);

    return 0;
}