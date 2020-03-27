#include <bits/stdc++.h>

using namespace std;


bool par_(const int valor)
{
  if(valor %  2 == 0)
    return true;
  return false;
}

int main(void)
{
  int N;

  vector<int> par;
  vector<int> impar;

  int valor;

  cin >> N;

  for(int i = 0; i < N; i++)
  {
    cin >> valor;

    if(par_(valor))
    {
      par.push_back(valor);
    }
    else
    {
      impar.push_back(valor);
    }

  }
  
  sort(par.begin(), par.end());
  sort(impar.begin(), impar.end());

  int tamanho_dos_vetores = par.size() + impar.size();

  for(int i = 0; i < par.size(); i++)
  {
    cout << par[i] << endl;
  }

  for(int i = impar.size() - 1; i >= 0; i--)
  {
    cout << impar[i] << endl;
  }

  return 0;
}
