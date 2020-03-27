#include <stdio.h>

int main(void)
{
  int i;
  int valor, soma = 0;
  int valores;

  scanf("%d", &valor);

  for(i = 0; i < 5; i++)
  {
    scanf("%d", &valores);
    if(valores == valor)
      soma++;

  }

  printf("%d\n", soma);


  return 0;
}
