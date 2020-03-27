#include <stdio.h>

int main(void)
{
  int i = 0;
  int N;
  int valores[500];
  int maior = 0, segundo_maior = 0;

  scanf("%d", &N);

  if(N == 0)
    return 0;

  while(N != 0)
  {
    if(N == 0)
      return 0;


    for(i = 0; i < N; i++)
    {
      scanf("%d", &valores[i]);

    }

    for(i = 0; i < N; i++)
    {
      if(valores[i] > maior)
        maior = valores[i];
    }

    for(i = 0; i < N; i++)
    {
      if(valores[i] == maior)
        continue;

      if(valores[i] > segundo_maior)
        segundo_maior = v      for(i = 0; i < N; i++)
      {
        scanf("%d", &valores[i]);

      }

      for(i = 0; i < N; i++)
      {
        if(valores[i] > maior)
          maior = valores[i];
      }

      for(i = 0; i < N; i++)
      {
        if(valores[i] == maior)
          continue;

        if(valores[i] > segundo_maior)
          segundo_maior = valores[i];

      }

      for(i = 0; i < N; i++)
      {
        if(valores[i] == segundo_maior)
          printf("%d\n", i + 1);
      }
alores[i];

    }

    for(i = 0; i < N; i++)
    {
      if(valores[i] == segundo_maior)
        printf("%d\n", i + 1);
    }



  }

  return 0;
}
