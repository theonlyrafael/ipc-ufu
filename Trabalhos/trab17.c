#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct atleta
{
    char nome[100];
    char esporte[50];
    int idade;
    float peso, altura;
};

void atletaDin(struct atleta c)
{
    struct atleta *din;

    din = malloc(sizeof(struct atleta));
    setbuf(stdin, NULL);

    printf("Digite o nome: ");
    gets(din->nome);
    printf("Digite o esporte: ");
    gets(din->esporte);
    printf("Digite a idade: ");
    scanf("%d", &din->idade);
    printf("Digite o peso: ");
    scanf("%f", &din->peso);
    printf("Digite a altura: ");
    scanf("%f", &din->altura);

    printf("\nO atleta dinamico:\nNome: %s\nEsporte: %s\nIdade: %d anos\nPeso: %.2f kg\nAltura: %.2f m\n", din->nome, din->esporte, din->idade, din->peso, din->altura);

    free(din);
}

void atletaEst(struct atleta c)
{
    struct atleta est;

    setbuf(stdin, NULL);

    printf("Digite o nome: ");
    gets(est.nome);
    printf("Digite o esporte: ");
    gets(est.esporte);
    printf("Digite a idade: ");
    scanf("%d", &est.idade);
    printf("Digite o peso: ");
    scanf("%f", &est.peso);
    printf("Digite a altura: ");
    scanf("%f", &est.altura);

    printf("\nO atleta estatico:\nNome: %s\nEsporte: %s\nIdade: %d anos\nPeso: %.2f kg\nAltura: %.2f m\n", est.nome, est.esporte, est.idade, est.peso, est.altura);
}

void atletaVet(struct atleta c)
{
    int parametro;

    printf("Digite quantos atletas sao: ");
    scanf("%d", &parametro);

    // Alocação dinâmica de um vetor de structs (VLA)
    struct atleta *vet = malloc(parametro * sizeof(struct atleta));

    for (int i = 0; i < parametro; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome do atleta %d: ", i + 1);
        gets(vet[i].nome);
        printf("Digite o esporte do atleta %d: ", i + 1);
        gets(vet[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &vet[i].idade);
        printf("Digite o peso do atleta %d: ", i + 1);
        scanf("%f", &vet[i].peso);
        printf("Digite a altura do atleta %d: ", i + 1);
        scanf("%f", &vet[i].altura);
        printf("\n");
    }

    printf("Por parametro\n");

    for (int i = 0; i < parametro; i++)
    {
        printf("\nAtleta[%d]:\nNome: %s\nEsporte: %s\nIdade: %d anos\nPeso: %.2f kg\nAltura: %.2f m\n", i, vet[i].nome, vet[i].esporte, vet[i].idade, vet[i].peso, vet[i].altura);
    }
    free(vet);
}

void atletaVal(struct atleta c)
{
    struct atleta val = {"Jorge", "Xadrez", 34, 88.3, 1.68};

    printf("\nAtleta por valor:\nNome: %s\nEsporte: %s\nIdade: %d anos\nPeso: %.2f kg\nAltura: %.2f m\n", val.nome, val.esporte, val.idade, val.peso, val.altura);
}

int main()
{

    setlocale(LC_ALL, "portuguese");
    int opc1;
    struct atleta c;
    char opc2[2];

    do
    {
        printf("\nDigite qual funcao quer executar:\n[1] Dinamico [2] Estatico [3] Vetor [4] Valor: ");
        scanf("%d", &opc1);

        switch (opc1)
        {
        case 1:
            atletaDin(c);
            break;
        case 2:
            atletaEst(c);
            break;
        case 3:
            atletaVet(c);
            break;
        case 4:
            atletaVal(c);
            break;
        default:
            printf("Opcao invalida.");
            break;
        }

        printf("\nDeseja realizar mais uma funcao?[s]/[n] ");
        scanf("%s", opc2);

    } while (opc2[0] == 'S' || opc2[0] == 's');

    return 0;
}