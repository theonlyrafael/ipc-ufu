#define linhas 3
#define colunas 4
int main() {
    float m[linhas][colunas] = { { 51, 21,  32,  4 } ,
                                 { 5, 60,  7,  80 },
                                 { 9, 10, 110, 12 } };
    for (int i = 0; i < linhas * colunas; i++) {
        printf(" %f", m[ i / colunas ] [ i % colunas ]);
        if (i % colunas == colunas-1)
            printf("\n");
    }
}