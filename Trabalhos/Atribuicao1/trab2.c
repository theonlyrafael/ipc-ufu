#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char M[20]="Davi";
    char N[20]="Paula";
    char R[20]="Cadu";

    if(strcmp(M,N)<=0 && strcmp(M,R)<=0){
        if(strcmp(N,R)<=0){
            fputs(M,stdout);
            fputs(N,stdout);
            fputs(R,stdout);
        }else{
            fputs(M,stdout);
            fputs(R,stdout);
            fputs(N,stdout);
        }
    }
    if(strcmp(N,M)<=0 && strcmp(N,R)<=0){
        if(strcmp(M,R)<=0){
            fputs(N,stdout);
            fputs(M,stdout);
            fputs(R,stdout);
        }else{
            fputs(N,stdout);
            fputs(R,stdout);
            fputs(M,stdout);
        }
    }
    if(strcmp(R,M)<=0 && strcmp(R,N)<=0){
        if(strcmp(M,N)<=0){
            fputs(R,stdout);
            fputs(M,stdout);
            fputs(N,stdout);
        }else{
            fputs(R,stdout);
            fputs(N,stdout);
            fputs(M,stdout);
        }
    }

    return 0;
}