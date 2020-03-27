#include <stdio.h>

int main()
{
  int i, operacoes, valor, soma;

  scanf("%d", &operacoes);

  for(i = 0; i < operacoes; i++)
  {
    scanf("%d", &valor);

    if((valor % 2) == 0)
      soma = 0;

    else
      soma = 1;

    printf("%d\n", soma);
  }

  return 0;
}
