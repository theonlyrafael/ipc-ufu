#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i, j;
       float v[20], aux;
       for(i = 0; i < 20; i++){
           if(scanf("%f", &v[i]) != 1){
               return 1;
           }
       }

       /* Sort in descending order */
       for(i = 0; i < 20 - 1; i++){
           for(j = i + 1; j < 20; j++){
               if(v[i] < v[j]){
                   aux = v[i];
                   v[i] = v[j];
                   v[j] = aux;
               }
           }
       }

       for(i = 0; i < 20; i++){
           printf("%f\n", v[i]);
       }

       return 0;
}
