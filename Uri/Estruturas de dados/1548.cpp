#include <bits/stdc++.h>

using namespace std;


int main(void)
{
  int N;
  int n_alunos;
  int trocas = 0;
  int nota;

  vector<int> notas_alunos;
  vector<int> notas_aux;

  cin >> N;

  for(int i = 0; i < N; i++)
  {
    cin >> n_alunos;

    for(int i = 0; i < n_alunos; i++)
    {
      cin >> nota;
      notas_alunos.push_back(nota);
      notas_aux.push_back(nota);
    }

    stable_sort(notas_aux.begin(), notas_aux.end(), greater<int>());

    for(int i = 0; i < notas_aux.size(); ++i)
    {
      if(notas_aux[i] == notas_alunos[i])
      {
        trocas++;
      }
    }

    cout << trocas << endl;

    trocas = 0;

    notas_alunos.erase(notas_alunos.begin(), notas_alunos.end());
    notas_aux.erase(notas_aux.begin(), notas_aux.end());

  }



  return 0;
}
