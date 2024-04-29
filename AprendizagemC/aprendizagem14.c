#include <stdio.h>
#include <stdlib.h>

float matrizes(float **matA){
  int i,j;

  matA = malloc(5 * sizeof(float*));

  for(i=0;i<5;i++){
    matA[i] = malloc (5 * sizeof (float));
  }

  for (i=0; i < 5; i++){
    for (j=0; j < 5; j++){
      printf("matA[%d][%d]: ", i,j);
      scanf("%f", &matA[i][j]);
        }
      }

   printf("Matriz A:\n");
   for(i=0; i<5; i++) {
    for(j=0;j<5; j++) {
        printf("%.1f ", matA[i][j]);
		}
		printf("\n");
	}
  printf("\n\n");
  printf("Matriz B(Transposta):\n");
  for(i=0; i<5; i++) {
    for(j=0;j<5; j++) {
        printf("%.1f ",matA[j][i]);
		}
		printf("\n");
	}

  for(i=0; i<5; i++){
    free(matA[i]);
  }
  free(matA);

  return **matA;
}

int main(){

float **matA;

matrizes(matA);

return 0;
}