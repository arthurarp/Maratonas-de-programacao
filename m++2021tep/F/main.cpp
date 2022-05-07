#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int N, L; cin >> N >> L;

  vector<int> v(N + 1);

  for (int i = 1; i <= N; i++)
    v[i] = 0;

  vector<pair<int,int>> vp;

  for (int i = 1; i <= N; ++i)
  {
    for (int j = i + 1; j <= N; ++j)
    {
      pair<int,int> p;

      p.first = i;
      p.second = j;

      vp.push_back(p);
    }
  }

  // for (int i = 1; i <= N; ++i)
  // {
  //   cout << "v[" << i << "] = " << v[i] << endl;
  // }
  // cout << endl;

  for (auto [i,j] : vp)
  {
    cout << "(" << i << ", " << j << ")" << endl;
  }

  cout << "\n\n\n";

  for (int i = 1; i <= N; ++i)
  {
    int length = v[i];
    for (int j = 0; j < (L - length); ++j)
    {
      if (vp[0].first != i)
        continue;
      int origin = vp[0].first;
      int destiny = vp[0].second;

      v[i]++;
      vp.erase(vp.begin());
      
    }
    cout << v[i] << endl;
    int rest = vp[0].first;

    while (rest == i)
    {
      pair<int,int> aux;
      aux.first = vp[0].second;
      aux.second = vp[0].first;
      vp.push_back(aux);
      vp.erase(vp.begin());

      rest = vp[0].first;
    }

    if (v[i] < L)
    {
      cout << "Nao\n";
      return 0;
    }
  }
  cout << "Sim" << endl;
  return 0;
}
