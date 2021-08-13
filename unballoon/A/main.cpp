#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int n, q;

  cin >> n >> q;

  vector<pair<string,int>> v;

  for (int i = 0; i < n; ++i)
  {
    pair<string,int> p;

    cin >> p.first >> p.second;

    v.push_back(p);
  }

  sort(v.begin(), v.end(), [](auto a, auto b)
  {
    if (a.second > b.second)
      return false;
    return true;

  });

  map<string, int> solutions;

  int previous = 0;

  solutions[v[0].first] = 0;

  for(int i = 1; i < n; ++i)
  {
    if(v[i].second > v[i - 1].second)
    {
      solutions[v[i].first] = i;
      previous = solutions[v[i].first];
    }
    else
      solutions[v[i].first] += previous;
  }

  for(int i = 0; i < q; ++i)
  {
    string consult;

    cin >> consult;

    cout << solutions[consult] << endl;
  }

  return 0;
}
