#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int n; cin >> n;
  int init = 0;

  int vetor[10001];

  if(n == 2)
  {
    cout << "1\n";
    return 0;
  }
  vetor[2] = 1;
  for (int i = 3; i <= n; i++)
  {
    vetor[i] = vetor[i - 1] + ((i - 1) - 1);
  }

  cout << vetor[n] << "\n";

  return 0;
}
