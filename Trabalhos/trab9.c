#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char temp[12];
    char lista[21][12] = { "Vinicius", "Guilherme", "Vitor",
                           "Lucas", "Igor", "Joao", "Pedro",
                           "Abel", "Luiz", "Wemerson", "Rafael",
                           "Pablo", "Saint", "Thais", "Matheus",
                           "Douglas", "Gabriel", "Viviane", "Reginaldo",
                           "Jose", "Leonardo" };

    for(int i=0; i<21; i++){
        for(int j=i+1; j<21;j++){
            if(strcmp(lista[i],lista[j]) > 0){
                strcpy(temp, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], temp);
            }
        }
    }

    printf("Apos de ordenar:\n=====================\n");
    for(int i=0; i<21; i++){
            printf("%s ", lista[i]);
    }

    return 0;
}