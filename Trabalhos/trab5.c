#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char funcao(char S[200], int i, int j)
{
  int pos;

  printf("Digite uma frase: ");
  gets(S);

  printf("Agora, digite dois valores inteiros nao negativos: ");
  scanf("%d %d", &i, &j);

  if (i < 0 || j < 0)
  {
    printf("Os numeros nao podem ser negativos!\n");
    return -1;
  }
  if (i < j)
  {
    for (pos = i; pos < j; pos++)
    {
      printf("%c", S[pos]);
    }
  }
  else
  {
    for (pos = j; pos < i; pos++)
    {
      printf("%c", S[pos]);
    }
  }

  return S[0]; // Retornando apenas o primeiro caractere para satisfazer o retorno char da função
}

int main()
{
  setlocale(LC_ALL, "portuguese");
  char S[200];
  int i = 0, j = 0;

  funcao(S, i, j);

  return 0;
}