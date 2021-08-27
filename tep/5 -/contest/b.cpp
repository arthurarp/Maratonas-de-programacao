#include <bits/stdc++.h>

using namespace std;

vector<int> possiveis {111, 222, 333, 444, 555, 666, 777, 888, 999};

int main(void)
{
  int n; cin >> n;
  int ultimo;
  for(int i = possiveis.size() - 1; i >= 0; --i)
  {
    if(n < possiveis[i])
    {
      ultimo = i;
    }
    else if (n == possiveis[i])
    {
      cout << n << endl;
      return 0;
    }
  }
  cout << possiveis[ultimo] << endl;
  return 0;
}