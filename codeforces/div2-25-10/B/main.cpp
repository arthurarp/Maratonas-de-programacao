#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  for (int i = 0; i < t; ++i)
  {
    int n; cin >> n;
    vector<int> v;
    vector<vector<int>> historic;
    map<int, int> m;

    for (int j = 0; j < n; ++j)
    {
      int a; cin >> a;
      if (m.count(a))
      {
        int new_count;

        new_count = m[a] + 1;

        m[a] = new_count;
      }
      else
      {
        m[a] = 1;
      }

      v.push_back(a);
    }
    historic.push_back(v);
    for (int j = 1; j <= 1000; ++j)
    {
      vector<int> new_array;

      for (auto u : historic[j - 1])
        new_array.push_back(m[u]);

      map<int, int> m;

      for (auto u : new_array)
      {
        if (m.count(u))
        {
          int new_count;

          new_count = m[u] + 1;

          m[u] = new_count;
        }
        else
        {
          m[u] = 1;
        }
      }

      historic.push_back(new_array);
    }

    int q; cin >> q;
    for (int k = 0; k < q; ++k)
    {
      int queryIndex; 
      ll step;
      
      cin >> queryIndex >> step;

      cout << historic[step][queryIndex] << endl;

    }

  }

  return 0;
}
