#define linhas 3
#define colunas 4
int main() {
    float m[linhas][colunas] = { { 51, 21,  32,  4 } ,
                                 { 5, 60,  7,  80 },
                                 { 9, 10, 110, 12 } }, aux;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            for (int k = 0; k < linhas; k++) {
                for (int n = 0; n < colunas; n++) {
                    if (i*colunas+j < k*colunas+n) {
                        if (m[i][j] > m[k][n]) {
                            aux = m[i][j];
                            m[i][j] = m[k][n];
                            m[k][n] = aux;
                        }
                    }
                }
            }

 

        }
    }
    for (int i = 0; i < linhas * colunas; i++) {
        printf(" %f", m[ i / colunas ] [ i % colunas ]);
      if (i % colunas == colunas-1)
            printf("\n");  
    }
    return 0;
}